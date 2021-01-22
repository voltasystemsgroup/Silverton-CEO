/*
this control assumes VT Pro-e is sending it a well formed scroll bar, it will not try to take objects
that dont fit and make them work
*/
function NavListHorizontal(Document, Properties)
{
    this.SelectedIndex = -1
    this.Anim_On = false    
    this.Connection = null

    Document.AddEventHandler("OnNetCipConnect", this.OnNetCipConnect, this)

	this.Speed = 0.17
	if (Properties["Scroll Speed"] == "Slower")
		this.Speed = .51
	if (Properties["Scroll Speed"] == "Slow")
		this.Speed = .34
	if (Properties["Scroll Speed"] == "Faster")
		this.Speed = .1
	if (Properties["Scroll Speed"] == "Fast")
		this.Speed = .12

    this.SlideButton = false
    
    this.SnapbackTimer = new Timer
    this.SnapbackTimer.Delay = Properties["Timeout"]
    this.SnapbackTimer.AddEventHandler("OnTimer", this.SnapbackCheck, this)
    
    this.TypeName = "NavListHorizontal"
    this.last_tick = 0
    
    this.ItemCount = 0    
    var hdr = null
    this.Page = Document.GetPage(Properties["#Page"])
    while (true)
    {
        var ItemName = Properties["#Name"] + "|Item_" + (this.ItemCount)
        
        hdr = this.Page.GetObject(ItemName)
        if (hdr != null)
            this.ItemCount++
        else
            break        
    }

    this.Items = new Array(this.ItemCount)
            
    this.x = Properties["#Left"]
    this.y = Properties["#Top"]
    this.Width = Properties["#Width"]
    this.Height = Properties["#Height"]
    
    this.SelectionCount = Properties["Item Count"]
    
    /* we're animating in the positive direction */
    this.Direction = 1
    this.TargetItem = -1
    
    this.ItemWidth = Properties["Item_Width"]
    this.ItemHeight = Properties["Item_Height"]    
    this.ItemSpacing = Properties["Item_Spacing"]
    
    /* this is where the selected item animates to */
    this.SelectionX = parseInt(((this.Width / 2) + this.x) - (this.ItemWidth / 2))
        
    this.ItemY = Properties["Item_Offset"] + this.y
    
    this.ControlWidth = Properties["Header_Width"]    
    
    this.WrapLeft =  this.x + this.ControlWidth - this.ItemWidth
    
    if (((this.ItemWidth * (this.ItemCount - 1)) + (this.ItemSpacing * (this.ItemCount - 1))) >= this.Width)
    {
        // maybe we should just expand the spacing? at least then it would scroll
        DebugPrint("NavListHorizontal: invalid sizes...\n")
        return null
    }
    
           
    /* this links items to digitals */
    this.Digitals = new Object()
    
    //this.AnimationTime = Properties["Animation Time"]

    this.Page = Document.GetPage(Properties["#Page"])
            
    this.UpButton = this.Page.GetObject(Properties["#Name"] + "|Left")
	if (Properties["Suppress Keyclicks"] == "Off")
		this.UpButton.AddEventHandler("OnPress", Document.PlayKeyClick, Document)
    this.UpButton.AddEventHandler("OnPress", this.OnPressMove, this, -1)
    this.UpButton.AddEventHandler("OnRelease", this.OnReleaseMove, this)
    this.UpButton.x = this.x
    this.UpButton.y = this.y
    this.UpButton.Width = this.ControlWidth
    this.UpButton.Height = this.Height
        
    this.DownButton = this.Page.GetObject(Properties["#Name"] + "|Right")
	if (Properties["Suppress Keyclicks"] != "Off")
		this.DownButton.AddEventHandler("OnPress", Document.PlayKeyClick, Document)
    this.DownButton.AddEventHandler("OnPress", this.OnPressMove, this, 1)
    this.DownButton.AddEventHandler("OnRelease", this.OnReleaseMove, this)
    this.DownButton.x = this.x + this.Width - this.ControlWidth
    this.DownButton.y = this.y
    this.DownButton.Width = this.ControlWidth
    this.DownButton.Height = this.Height
        
    this.SlideAmount = 0
    
    this.Icons = this.Page.GetObject(Properties["#Name"] + "|Icon")
    this.Icons.Visible = false

	var find_page
	this.ItemInfo = new Array(this.Icons.GetModeCount(0))

	/*
	create list of actions for each selection
	*/
	for (i = 0; i < this.Icons.GetModeCount(0); i++)
	{
		this.ItemInfo[i] = new Object
		
		find_page = Document.GetPage(Properties["PageFlip_" + i])		
		this.ItemInfo[i].Page = find_page

		this.ItemInfo[i].Join = Properties["Join_" + i]
		if (this.ItemInfo[i].Join == "")
			this.ItemInfo[i].Join = 0

		this.ItemInfo[i].State = 0		
	}
    
    /*
    this loop does everything that needs to be done for all items, the loops that follow handle setting
    the startup y position
    */
    for (i = 0; i < this.ItemCount; i++)
    {
        var ItemName = Properties["#Name"] + "|Item_" + i
        
        hdr = this.Page.GetObject(ItemName)
        if (hdr == null)
        {
            DebugPrint("Couldnt find: " + ItemName + "\n")
            continue
        }
        
        hdr.y = this.ItemY
        hdr.Width = this.ItemWidth        
        hdr.Height = this.ItemHeight
		            
        this.Items[i] = new Object
        this.Items[i].ptr = hdr       

        this.Items[i].Index = i                    
        this.Items[i].SelectionIndex = i                    

		if (Properties["Suppress Keyclicks"] != "Off")
			hdr.AddEventHandler("OnPress", Document.PlayKeyClick, Document)

        hdr.AddEventHandler("OnPress", this.OnSendDigital, this, {ptr: this.Items[i], val: 1})
		hdr.AddEventHandler("OnRelease", this.OnSendDigital, this, {ptr: this.Items[i], val: 0})
    }
    
    for (i = 0; i < this.ItemCount; i++)
    {
        hdr = this.Items[i]
        if (hdr == null)
            continue;
        
        hdr = hdr.ptr
        if (hdr == null)
            continue;
            
        hdr.x = this.UpButton.x + this.UpButton.Width + (hdr.Width * i) + (this.ItemSpacing * i)

		if (hdr.x > this.DownButton.x)
		{
			hdr.Visible = false;
		}
        
        hdr.SetGraphic(this.Icons.GetGraphic(i, 0), 0, 0)
        hdr.SetGraphic(this.Icons.GetGraphic(i, 1), 0, 1)
        
        hdr.SetText(this.Icons.GetText(i, 0), 0, 0)
        hdr.SetText(this.Icons.GetText(i, 1), 0, 1)
    }               

    
	/*
	FIX for BUG 1330

	this causes the page to redraw which "hides" items which would appear outside of the list
	*/
	this.Page.Refresh()
    
}
NavListHorizontal.prototype.HasValidSelection = function()
{
    return this.IsValidSelection(this.SelectedIndex)       
}
NavListHorizontal.prototype.IsValidSelection = function(item_index)
{
    if (item_index >= 0 && item_index < this.SelectionCount)
        return true
    
    return false
}
NavListHorizontal.prototype.SetSelected = function(item_index)
{
    var itm_x
    
    if (this.IsValidSelection(item_index) == false)
        return

    this.SelectedIndex = item_index
    
    itm_x = this.GetItem(this.SelectedIndex)
}
NavListHorizontal.prototype.StartAnimation = function()
{    
    try
    {
        var delay_test = g_AnimationTimer.Delay
    }
    catch(err)
    {
        g_AnimationTimer = new Timer
        g_AnimationTimer.Delay = 20        
    }
    
    this.last_tick = GetTickCount()
    
    /*
    
    */
    g_AnimationTimer.AddEventHandler("OnTimer", this.BrowseTimer, this)
    g_AnimationTimer.Start()    
}
NavListHorizontal.prototype.StopAnimation = function()
{
    if (typeof(g_AnimationTimer) == 'undefined')
        return
        
    g_AnimationTimer.RemoveEventHandler("OnTimer", this.BrowseTimer, this)
}
NavListHorizontal.prototype.SlideTo = function(item_index)
{
    /* this is to determine the 2 extreme items */
    var lowest_index = -1
    var lowest_x = this.Width
    var highest_index = -1
    var highest_x = this.x

    var itm_x = this.GetItem(item_index)
    
    if (itm_x != null) // the item is currently visible, easy to slide to this one
    {        
        this.SlideAmount = this.SelectionX - itm_x.ptr.x
        if (this.SlideAmount > 0)
            this.Dir = 1
        else
            this.Dir = -1
        
        this.SlideAmount = Math.abs(this.SlideAmount)
        
        this.SetSelected(itm_x.SelectionIndex)        
        
        if (this.SlideAmount > 0)
        {
            this.StartAnimation()
        }
            
        return
    }
    
    /* the item is not visible so find the highest and lowest item and see which we are closer too */
    for (var i = 0; i < this.ItemCount; i++)
    {
        itm_x = this.Items[i]
        
        if (itm_x.ptr.x < lowest_x)
        {
            lowest_index = itm_x.SelectionIndex
            lowest_x = itm_x.ptr.x
        }
            
        if (itm_x.ptr.x > highest_x)
        {
            highest_index = itm_x.SelectionIndex
            highest_x = itm_x.ptr.x
        }
   }
   
    if (highest_index == lowest_index)
        return // this will not work if we only have 1 item
        
    var high_diff = Math.abs(highest_index - item_index)
    var low_diff = Math.abs(lowest_index - item_index)
        
    if (low_diff < high_diff)
    {
        this.Dir = 1
        this.SlideAmount = low_diff * (this.ItemWidth + this.ItemSpacing) + (this.SelectionX - lowest_x)
    }
    else
    {
        this.Dir = -1
        this.SlideAmount = high_diff * (this.ItemWidth + this.ItemSpacing) + (highest_x - this.SelectionX)
    }
    
    if (this.SlideAmount > 0)
    {
        this.StartAnimation()
    }
}
NavListHorizontal.prototype.OnSendDigital = function(item, x, y, info)
{
	try
	{
		if (this.ItemInfo[info.ptr.SelectionIndex].Join > 0)
			SendDigital(this.ItemInfo[info.ptr.SelectionIndex].Join, info.val)
	}
	catch (err)
	{
	}

	try
	{
		if (info.val == 1)
			if (this.ItemInfo[info.ptr.SelectionIndex].Page != undefined && this.ItemInfo[info.ptr.SelectionIndex].Page != null)
			{
				this.ItemInfo[info.ptr.SelectionIndex].Page.Show()
			}
	}
	catch (err)
	{
	}
}

NavListHorizontal.prototype.OnPressItem = function(item, x, y, info)
{
    if (info.SelectionIndex == this.SelectedIndex)
        return
        
    this.SnapbackTimer.Stop()
    this.SlideAmount = -1
    
    /* cancel any other animations */
    this.StopAnimation()
    
    /* slide to the pressed item */
    this.SlideTo(info.SelectionIndex)
    
    this.last_tick = GetTickCount() - 20
    this.BrowseTimer(null)     
}
NavListHorizontal.prototype.OnPressMove = function(item, x, y, dir)
{
    item.State = 1
	item.Refresh()

	this.SnapbackTimer.Stop()
    this.SlideAmount = -1
    
    this.SlideButton = true
    
    this.Dir = dir    
    this.StartAnimation()  
    
    this.last_tick = GetTickCount() - 20
    this.BrowseTimer(null) 
}
NavListHorizontal.prototype.OnReleaseMove = function(item, x, y)
{
    this.StopAnimation()        
    
    this.SnapbackTimer.Start()
    
    this.SlideButton = false
	item.State = 0
	item.Refresh()
}
NavListHorizontal.prototype.GetItem = function(item_index)
{
    for (i = 0; i < this.ItemCount; i++) 
    {
        var itm_x = this.Items[i]        
        
        if (itm_x == null)
            continue
        
        if (itm_x.SelectionIndex == item_index)
            return itm_x
    }
    
    return null
}
NavListHorizontal.prototype.SnapbackCheck = function(tmr)
{
    this.SnapbackTimer.Stop()

    if (this.HasValidSelection() == false)
        return
    
    var selected_item = this.GetItem(this.SelectedIndex)
    if (selected_item != null)
        if (selected_item.x == this.SelectionX)
            return
    
    this.SlideTo(this.SelectedIndex)
}
NavListHorizontal.prototype.BrowseTimer = function(tmr)
{
    if (this.last_tick <= 0)
    { // the first call is just set up
        this.last_tick = GetTickCount()
        return
    }
    
    var tc = GetTickCount()
    var diff = tc - this.last_tick
    
    var move = parseInt(this.Speed * this.Dir * diff)
    
    if (this.SlideAmount < 0 && this.SlideButton == false)
    {
        this.StopAnimation()
        return
    }
    
    if (this.SlideAmount >= 0)
    {
        if (Math.abs(move) > this.SlideAmount) // our last frame
        {
            this.StopAnimation()
            
            /* make sure we keep moving in the same direection */
            if (move < 0) /* this check stops a bounce when selecting an item with a greater y than SelecetionY */
                move = -1 * this.SlideAmount
            else
                move = this.SlideAmount /* original line */
                
            this.SlideAmount = -1
        }
            
        this.SlideAmount -= Math.abs(move)
    }
    
    var tmp_item
    var tmp_item_i
    var prev_info
    var prev_index
    var new_x = 0
    
    for (i = 0; i < this.ItemCount; i++) 
    {
        tmp_item_i = this.Items[i]
        tmp_item = tmp_item_i.ptr
        tmp_item.x += move
    }
    
    for (i = 0; i < this.ItemCount; i++) 
    {
        tmp_item_i = this.Items[i]
        tmp_item = tmp_item_i.ptr
        
        if (this.Dir > 0)
        { // we're animating up
            if (tmp_item.x > this.DownButton.x)            
            {
                prev_index  = tmp_item_i.Index + 1

                if (prev_index > this.ItemCount - 1)
                    prev_index = 0
                prev_info = this.Items[prev_index]
                
                // just reuse the var
                prev_index = prev_info.SelectionIndex - 1
                if (prev_index < 0)
                    prev_index = this.SelectionCount - 1
                                   
                tmp_item_i.SelectionIndex = prev_index                
                                
                tmp_item.State = this.ItemInfo[tmp_item_i.SelectionIndex].State
                    
                tmp_item.SetGraphic(this.Icons.GetGraphic(prev_index, 0), 0, 0)
                tmp_item.SetGraphic(this.Icons.GetGraphic(prev_index, 1), 0, 1)

                tmp_item.SetText(this.Icons.GetText(prev_index, 0), 0, 0)
                tmp_item.SetText(this.Icons.GetText(prev_index, 1), 0, 1)
				                
                new_x = prev_info.ptr.x - this.ItemWidth - this.ItemSpacing

                tmp_item.x = new_x
            }
        }
        else
        { // animating down
            if (tmp_item.x < this.WrapLeft)
            {                
                prev_index  = tmp_item_i.Index - 1
                
                if (prev_index < 0)
                    prev_index = this.ItemCount - 1                   
                prev_info = this.Items[prev_index]
                
                // prev_index reuse -- has nothing to do with what it was used for previous
                prev_index = prev_info.SelectionIndex + 1
                
                if (prev_index >= this.SelectionCount)
                    prev_index = 0
                    
                tmp_item_i.SelectionIndex = prev_index
                
				tmp_item.State = this.ItemInfo[tmp_item_i.SelectionIndex].State
                                    
                tmp_item.SetGraphic(this.Icons.GetGraphic(prev_index, 0), 0, 0)
                tmp_item.SetGraphic(this.Icons.GetGraphic(prev_index, 1), 0, 1)

                tmp_item.SetText(this.Icons.GetText(prev_index, 0), 0, 0)
                tmp_item.SetText(this.Icons.GetText(prev_index, 1), 0, 1)
                
                new_x = prev_info.ptr.x + this.ItemWidth + this.ItemSpacing
                
                tmp_item.x = new_x					
            }			
        }
		
		if (tmp_item.x < this.UpButton.x || tmp_item.x + tmp_item.Width > this.DownButton.x + this.DownButton.Width)
			tmp_item.Visible = false
		else
			tmp_item.Visible = true
			
    }
    
    this.last_tick = tc  
    this.Page.Refresh(this.x, this.y, this.Width, this.Height)    
}
NavListHorizontal.prototype.OnDigital = function(conn, join, value)
{    
    for (iteminfo in this.ItemInfo)
    {
        if (this.ItemInfo[iteminfo].Join == join)
        {
			this.ItemInfo[iteminfo].State = value

			/* first set the state of the related object */
			var itm_x = this.GetItem(iteminfo)
			if (itm_x != null)
			{	itm_x.ptr.State = value
				itm_x.ptr.Refresh()
			}

			if (!value) break;

            var tmp_obj = new Object()
            tmp_obj.SelectionIndex = iteminfo
            
            this.OnPressItem(null, 0, 0, tmp_obj)
            break;
        }            
    }
}
NavListHorizontal.prototype.OnAllClear = function(conn)
{

}
NavListHorizontal.prototype.OnNetCipConnect = function(conn)
{	
    conn.AddEventHandler("OnDigital", this.OnDigital, this)
    conn.AddEventHandler("OnAllClear", this.OnAllClear, this)
}
