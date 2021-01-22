#ifndef __S2_BSS_SOUNDWEB_LONDON_MATRIX_MIXER_V4_0_H__
#define __S2_BSS_SOUNDWEB_LONDON_MATRIX_MIXER_V4_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_SUBSCRIBE$_DIG_INPUT 0

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_ONOFF$_DIG_INPUT 1
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_ONOFF$_ARRAY_LENGTH 96

/*
* ANALOG_INPUT
*/
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_INPUT$_ANALOG_INPUT 0
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_IMAXOUTPUT_ANALOG_INPUT 1

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_OBJECTID$_STRING_INPUT 2
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_OBJECTID$_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __OBJECTID$, __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_OBJECTID$_STRING_MAX_LEN );

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_RX$_BUFFER_INPUT 3
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_RX$_BUFFER_MAX_LEN 400
CREATE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __RX$, __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_RX$_BUFFER_MAX_LEN );

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_GAIN$_ANALOG_INPUT 4
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_GAIN$_ARRAY_LENGTH 48

/*
* DIGITAL_OUTPUT
*/

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_ONOFF_FB$_DIG_OUTPUT 0
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_ONOFF_FB$_ARRAY_LENGTH 96

/*
* ANALOG_OUTPUT
*/

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_TX$_STRING_OUTPUT 0

#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_GAIN_FB$_ANALOG_OUTPUT 1
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_GAIN_FB$_ARRAY_LENGTH 48

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
CREATE_INTARRAY1D( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __VOLUMEOUTPUT, 48 );;


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
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_RETURNSTRING_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __RETURNSTRING, __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_RETURNSTRING_STRING_MAX_LEN );
#define __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_TEMPSTRING_STRING_MAX_LEN 40
CREATE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __TEMPSTRING, __S2_BSS_Soundweb_London_Matrix_Mixer_v4_0_TEMPSTRING_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ONOFF$ );
   DECLARE_IO_ARRAY( __ONOFF_FB$ );
   DECLARE_IO_ARRAY( __GAIN$ );
   DECLARE_IO_ARRAY( __GAIN_FB$ );
   unsigned short __I;
   unsigned short __RETURNI;
   unsigned short __SUBSCRIBE;
   unsigned short __XOK;
   unsigned short __STATEVARONOFF;
   unsigned short __STATEVARGAIN;
   unsigned short __STATEVARSUB;
   unsigned short __STATEVARRECEIVE;
   unsigned short __X;
   DECLARE_INTARRAY( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __VOLUMEOUTPUT );
   DECLARE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __RETURNSTRING );
   DECLARE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __TEMPSTRING );
   DECLARE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __OBJECTID$ );
   DECLARE_STRING_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __RX$ );
};

START_NVRAM_VAR_STRUCT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0 )
{
};

DEFINE_WAITEVENT( S2_BSS_Soundweb_London_Matrix_Mixer_v4_0, __SPLS_TMPVAR__WAITLABEL_0__ );


#endif //__S2_BSS_SOUNDWEB_LONDON_MATRIX_MIXER_V4_0_H__

