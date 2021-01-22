#ifndef __S2_ATLONA_RESPONSE_SORTER_R0_0_H__
#define __S2_ATLONA_RESPONSE_SORTER_R0_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/


#define __S2_Atlona_Response_Sorter_r0_0_FM_SWT_MOD_$_BUFFER_INPUT 0
#define __S2_Atlona_Response_Sorter_r0_0_FM_SWT_MOD_$_BUFFER_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Atlona_Response_Sorter_r0_0, __FM_SWT_MOD_$, __S2_Atlona_Response_Sorter_r0_0_FM_SWT_MOD_$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Atlona_Response_Sorter_r0_0_TO_MAIN_$_STRING_OUTPUT 0

#define __S2_Atlona_Response_Sorter_r0_0_TO_COMPORT_MOD_$_STRING_OUTPUT 1
#define __S2_Atlona_Response_Sorter_r0_0_TO_COMPORT_MOD_$_ARRAY_LENGTH 32

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
#define __S2_Atlona_Response_Sorter_r0_0_SJUNK$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_Atlona_Response_Sorter_r0_0, __SJUNK$, __S2_Atlona_Response_Sorter_r0_0_SJUNK$_STRING_MAX_LEN );
#define __S2_Atlona_Response_Sorter_r0_0_STEMP$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_Atlona_Response_Sorter_r0_0, __STEMP$, __S2_Atlona_Response_Sorter_r0_0_STEMP$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Atlona_Response_Sorter_r0_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __TO_COMPORT_MOD_$ );
   unsigned short __NLEN;
   unsigned short __NSTART;
   unsigned short __NZONE;
   DECLARE_STRING_STRUCT( S2_Atlona_Response_Sorter_r0_0, __SJUNK$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Response_Sorter_r0_0, __STEMP$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Response_Sorter_r0_0, __FM_SWT_MOD_$ );
};

START_NVRAM_VAR_STRUCT( S2_Atlona_Response_Sorter_r0_0 )
{
};



#endif //__S2_ATLONA_RESPONSE_SORTER_R0_0_H__

