#ifndef __S2_ATLONA_UNIVERSAL_2_WAY_COMPORT_GEN_3_R0_0_H__
#define __S2_ATLONA_UNIVERSAL_2_WAY_COMPORT_GEN_3_R0_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_ENABLE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/


#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_TX$_BUFFER_INPUT 0
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_TX$_BUFFER_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __TX$, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_TX$_BUFFER_MAX_LEN );
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_FM_SWT_MOD_$_BUFFER_INPUT 1
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_FM_SWT_MOD_$_BUFFER_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __FM_SWT_MOD_$, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_FM_SWT_MOD_$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_RX$_STRING_OUTPUT 0
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_TO_SWT_MOD_$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_RXWINDOW_INTEGER_PARAMETER 10
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_ZONE_INTEGER_PARAMETER 11
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
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_BAUDRATE_STRING_PARAMETER 12
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_DATABITS_STRING_PARAMETER 13
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_PARITY_STRING_PARAMETER 14
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_STOPBITS_STRING_PARAMETER 15
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_BAUDRATE_PARAM_MAX_LEN 6
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __BAUDRATE, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_BAUDRATE_PARAM_MAX_LEN );
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_DATABITS_PARAM_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __DATABITS, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_DATABITS_PARAM_MAX_LEN );
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_PARITY_PARAM_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __PARITY, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_PARITY_PARAM_MAX_LEN );
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_STOPBITS_PARAM_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __STOPBITS, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_STOPBITS_PARAM_MAX_LEN );


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
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_SLAST$_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __SLAST$, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_SLAST$_STRING_MAX_LEN );
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_SRXHEAD$_STRING_MAX_LEN 11
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __SRXHEAD$, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_SRXHEAD$_STRING_MAX_LEN );
#define __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_SJUNK$_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __SJUNK$, __S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0_SJUNK$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __NLEN;
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __SLAST$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __SRXHEAD$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __SJUNK$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __TX$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __FM_SWT_MOD_$ );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __BAUDRATE );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __DATABITS );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __PARITY );
   DECLARE_STRING_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0, __STOPBITS );
};

START_NVRAM_VAR_STRUCT( S2_Atlona_Universal_2_Way_ComPort_Gen_3_r0_0 )
{
};



#endif //__S2_ATLONA_UNIVERSAL_2_WAY_COMPORT_GEN_3_R0_0_H__

