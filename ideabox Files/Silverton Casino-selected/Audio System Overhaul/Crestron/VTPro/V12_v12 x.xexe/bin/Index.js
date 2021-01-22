function OnDocOpen(Document)
{
    /* include all files required by all used controls */
    try {
        Include("NavList.js")
    }
    catch (e) {
        DebugPrint(e)
    }
    try {
        Include("NavListH.js")
    }
    catch (e) {
        DebugPrint(e)
    }

    /* declare variables that will be used for all controls */
    var Properties
    var Control

    // references to all the controls we create
    var Controls = new Object

    /* for each control */
    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList"
    Properties["#Page"] = "Control Src8_Music 8"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_1"
    Properties["#Page"] = "Control Src7_Music 7"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_2"
    Properties["#Page"] = "Control Src6_Music 6"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_3"
    Properties["#Page"] = "Control Src5_Music 5"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_4"
    Properties["#Page"] = "Control Src4_Music 4"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_5"
    Properties["#Page"] = "Control Src3_Music 3"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_6"
    Properties["#Page"] = "Control Src2_Music 2"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavList_7"
    Properties["#Page"] = "Control Src1_Music 1"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "On"
    Properties["#Left"] = 16
    Properties["#Top"] = 79
    Properties["#Width"] = 149
    Properties["#Height"] = 299
    Properties["Header_Height"] = 40
    Properties["Item_Height"] = 40
    Properties["Item_Width"] = 149
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 3
    Properties["Item Count"] = 10
    Properties["Join_0"] = "144"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "145"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "146"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "147"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "148"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "149"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "150"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "151"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "152"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "153"
    Properties["PageFlip_9"] = ""

    /* create instance of control */
    try {
        Control = new NavList(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

    /* create instance of properties for control */
    Properties = new Object

    Properties["#Name"] = "NavListHorizontal_1"
    Properties["#Page"] = "Main"
    Properties["Version"] = 1
    Properties["Speed"] = 17
    Properties["Timeout"] = 6000
    Properties["Suppress Keyclicks"] = "Off"
    Properties["#Left"] = 0
    Properties["#Top"] = 548
    Properties["#Width"] = 800
    Properties["#Height"] = 52
    Properties["Header_Width"] = 109
    Properties["Item_Height"] = 52
    Properties["Item_Width"] = 90
    Properties["Item_Offset"] = 0
    Properties["Item_Spacing"] = 1
    Properties["Item Count"] = 43
    Properties["Join_0"] = "30"
    Properties["PageFlip_0"] = ""
    Properties["Join_1"] = "31"
    Properties["PageFlip_1"] = ""
    Properties["Join_2"] = "32"
    Properties["PageFlip_2"] = ""
    Properties["Join_3"] = "33"
    Properties["PageFlip_3"] = ""
    Properties["Join_4"] = "34"
    Properties["PageFlip_4"] = ""
    Properties["Join_5"] = "35"
    Properties["PageFlip_5"] = ""
    Properties["Join_6"] = "36"
    Properties["PageFlip_6"] = ""
    Properties["Join_7"] = "37"
    Properties["PageFlip_7"] = ""
    Properties["Join_8"] = "38"
    Properties["PageFlip_8"] = ""
    Properties["Join_9"] = "39"
    Properties["PageFlip_9"] = ""
    Properties["Join_10"] = "40"
    Properties["PageFlip_10"] = ""
    Properties["Join_11"] = "41"
    Properties["PageFlip_11"] = ""
    Properties["Join_12"] = "42"
    Properties["PageFlip_12"] = ""
    Properties["Join_13"] = "43"
    Properties["PageFlip_13"] = ""
    Properties["Join_14"] = "44"
    Properties["PageFlip_14"] = ""
    Properties["Join_15"] = "45"
    Properties["PageFlip_15"] = ""
    Properties["Join_16"] = "46"
    Properties["PageFlip_16"] = ""
    Properties["Join_17"] = "47"
    Properties["PageFlip_17"] = ""
    Properties["Join_18"] = "48"
    Properties["PageFlip_18"] = ""
    Properties["Join_19"] = "49"
    Properties["PageFlip_19"] = ""
    Properties["Join_20"] = "50"
    Properties["PageFlip_20"] = ""
    Properties["Join_21"] = "51"
    Properties["PageFlip_21"] = ""
    Properties["Join_22"] = "52"
    Properties["PageFlip_22"] = ""
    Properties["Join_23"] = "53"
    Properties["PageFlip_23"] = ""
    Properties["Join_24"] = "54"
    Properties["PageFlip_24"] = ""
    Properties["Join_25"] = "55"
    Properties["PageFlip_25"] = ""
    Properties["Join_26"] = "56"
    Properties["PageFlip_26"] = ""
    Properties["Join_27"] = "57"
    Properties["PageFlip_27"] = ""
    Properties["Join_28"] = "58"
    Properties["PageFlip_28"] = ""
    Properties["Join_29"] = "59"
    Properties["PageFlip_29"] = ""
    Properties["Join_30"] = "60"
    Properties["PageFlip_30"] = ""
    Properties["Join_31"] = "61"
    Properties["PageFlip_31"] = ""
    Properties["Join_32"] = "62"
    Properties["PageFlip_32"] = ""
    Properties["Join_33"] = "63"
    Properties["PageFlip_33"] = ""
    Properties["Join_34"] = "64"
    Properties["PageFlip_34"] = ""
    Properties["Join_35"] = "65"
    Properties["PageFlip_35"] = ""
    Properties["Join_36"] = "66"
    Properties["PageFlip_36"] = ""
    Properties["Join_37"] = "67"
    Properties["PageFlip_37"] = ""
    Properties["Join_38"] = "68"
    Properties["PageFlip_38"] = ""
    Properties["Join_39"] = "69"
    Properties["PageFlip_39"] = ""
    Properties["Join_40"] = "70"
    Properties["PageFlip_40"] = ""
    Properties["Join_41"] = "71"
    Properties["PageFlip_41"] = ""
    Properties["Join_42"] = "72"
    Properties["PageFlip_42"] = ""

    /* create instance of control */
    try {
        Control = new NavListHorizontal(Document, Properties)
    }
    catch (e) {
        DebugPrint(e)
    }

    /* add control to our collection of controls */
    if (Control != null)
    {
        Controls[Properties["#Page"] + "|" + Properties["#Name"]] = Control
    }

}
