#ifndef __S2_BSS_AUDIO_SOUNDWEB_LONDON_NODE_V4_0_H__
#define __S2_BSS_AUDIO_SOUNDWEB_LONDON_NODE_V4_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_NODE$_STRING_INPUT 1
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_NODE$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __NODE$, __S2_BSS_Audio_Soundweb_London_Node_v4_0_NODE$_STRING_MAX_LEN );

#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_MODULESTX$_BUFFER_INPUT 0
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_MODULESTX$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __MODULESTX$, __S2_BSS_Audio_Soundweb_London_Node_v4_0_MODULESTX$_BUFFER_MAX_LEN );
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_COMRX$_BUFFER_INPUT 2
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_COMRX$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __COMRX$, __S2_BSS_Audio_Soundweb_London_Node_v4_0_COMRX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_MODULESRX$_STRING_OUTPUT 0
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_COMTX$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_TEMPSTRING1_STRING_MAX_LEN 80
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __TEMPSTRING1, __S2_BSS_Audio_Soundweb_London_Node_v4_0_TEMPSTRING1_STRING_MAX_LEN );
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_SENDSTRING_STRING_MAX_LEN 80
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __SENDSTRING, __S2_BSS_Audio_Soundweb_London_Node_v4_0_SENDSTRING_STRING_MAX_LEN );
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_TEMPSTRING2_STRING_MAX_LEN 80
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __TEMPSTRING2, __S2_BSS_Audio_Soundweb_London_Node_v4_0_TEMPSTRING2_STRING_MAX_LEN );
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_TEMPSTRING3_STRING_MAX_LEN 80
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __TEMPSTRING3, __S2_BSS_Audio_Soundweb_London_Node_v4_0_TEMPSTRING3_STRING_MAX_LEN );
#define __S2_BSS_Audio_Soundweb_London_Node_v4_0_RECEIVESTRING_STRING_MAX_LEN 80
CREATE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __RECEIVESTRING, __S2_BSS_Audio_Soundweb_London_Node_v4_0_RECEIVESTRING_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __XOK1;
   unsigned short __CHECKSUM;
   unsigned short __I;
   unsigned short __XOK2;
   unsigned short __J;
   unsigned short __MARKER1;
   unsigned short __MARKER2;
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __TEMPSTRING1 );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __SENDSTRING );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __TEMPSTRING2 );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __TEMPSTRING3 );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __RECEIVESTRING );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __NODE$ );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __MODULESTX$ );
   DECLARE_STRING_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0, __COMRX$ );
};

START_NVRAM_VAR_STRUCT( S2_BSS_Audio_Soundweb_London_Node_v4_0 )
{
};



#endif //__S2_BSS_AUDIO_SOUNDWEB_LONDON_NODE_V4_0_H__

