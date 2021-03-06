#ifndef __S2_AUTOCONFTSID_V7_H__
#define __S2_AUTOCONFTSID_V7_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AutoConfTSID_v7_ENABLE_DIG_INPUT 0
#define __S2_AutoConfTSID_v7_RUN_DIG_INPUT 1
#define __S2_AutoConfTSID_v7_SETONEID_DIG_INPUT 2
#define __S2_AutoConfTSID_v7_WIPEOUTALL_DIG_INPUT 3
#define __S2_AutoConfTSID_v7_KEEPAUTOSETTABLE_DIG_INPUT 4
#define __S2_AutoConfTSID_v7_PPNDISCOVER_DIG_INPUT 5
#define __S2_AutoConfTSID_v7_SETAAETO31_DIG_INPUT 6


/*
* ANALOG_INPUT
*/
#define __S2_AutoConfTSID_v7_ID2SET_ANALOG_INPUT 0
#define __S2_AutoConfTSID_v7_DEBUG_LEVEL_ANALOG_INPUT 1

#define __S2_AutoConfTSID_v7_TYPE$_STRING_INPUT 2
#define __S2_AutoConfTSID_v7_TYPE$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __TYPE$, __S2_AutoConfTSID_v7_TYPE$_STRING_MAX_LEN );
#define __S2_AutoConfTSID_v7_CMDIN$_STRING_INPUT 3
#define __S2_AutoConfTSID_v7_CMDIN$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __CMDIN$, __S2_AutoConfTSID_v7_CMDIN$_STRING_MAX_LEN );
#define __S2_AutoConfTSID_v7_PROMPT$_STRING_INPUT 5
#define __S2_AutoConfTSID_v7_PROMPT$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __PROMPT$, __S2_AutoConfTSID_v7_PROMPT$_STRING_MAX_LEN );

#define __S2_AutoConfTSID_v7_CONSIN$_BUFFER_INPUT 4
#define __S2_AutoConfTSID_v7_CONSIN$_BUFFER_MAX_LEN 255
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __CONSIN$, __S2_AutoConfTSID_v7_CONSIN$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_AutoConfTSID_v7_WAITCONSOLE_DIG_OUTPUT 0
#define __S2_AutoConfTSID_v7_BUSY_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_AutoConfTSID_v7_ERROR_ANALOG_OUTPUT 0
#define __S2_AutoConfTSID_v7_IDDONE_ANALOG_OUTPUT 1

#define __S2_AutoConfTSID_v7_CONSOUT$_STRING_OUTPUT 2
#define __S2_AutoConfTSID_v7_MSGOUT$_STRING_OUTPUT 3
#define __S2_AutoConfTSID_v7_RESPONSE$_STRING_OUTPUT 4
#define __S2_AutoConfTSID_v7_DEBOUT$_STRING_OUTPUT 5


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
#define __S2_AutoConfTSID_v7_G_LOOKFOR$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_LOOKFOR$, __S2_AutoConfTSID_v7_G_LOOKFOR$_STRING_MAX_LEN );
#define __S2_AutoConfTSID_v7_G_RESPONSE$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_RESPONSE$, __S2_AutoConfTSID_v7_G_RESPONSE$_STRING_MAX_LEN );
#define __S2_AutoConfTSID_v7_G_TYPE$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_TYPE$, __S2_AutoConfTSID_v7_G_TYPE$_STRING_MAX_LEN );
#define __S2_AutoConfTSID_v7_G_SYSTEMPROMPT$_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_SYSTEMPROMPT$, __S2_AutoConfTSID_v7_G_SYSTEMPROMPT$_STRING_MAX_LEN );
#define __S2_AutoConfTSID_v7_AAETSID$_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_AutoConfTSID_v7, __AAETSID$, __S2_AutoConfTSID_v7_AAETSID$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_AutoConfTSID_v7 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __G_ICOMMANDINPROGRESS;
   unsigned short __G_IPARSERESPONSE;
   unsigned short __G_ISENDTOUSEROUT;
   unsigned short __G_ICURRENTACTION;
   unsigned short __G_ICURRENTFUNCTION;
   unsigned short __G_ICLEARBUSY;
   unsigned short __G_IPPNDISCOVERVALID;
   unsigned short __G_IIDTOSET;
   unsigned short __G_IGOTSYSTEMPROMPT;
   unsigned short __G_ISYSTEMISSETFORAUTOCONFIG;
   unsigned short __SEMAPHORE;
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_LOOKFOR$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_RESPONSE$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_TYPE$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __G_SYSTEMPROMPT$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __AAETSID$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __TYPE$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __CMDIN$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __PROMPT$ );
   DECLARE_STRING_STRUCT( S2_AutoConfTSID_v7, __CONSIN$ );
};

START_NVRAM_VAR_STRUCT( S2_AutoConfTSID_v7 )
{
   unsigned short __G_IFIRSTTIMEBOOT;
};

DEFINE_WAITEVENT( S2_AutoConfTSID_v7, CONSCMDTIMEOUT );


#endif //__S2_AUTOCONFTSID_V7_H__

