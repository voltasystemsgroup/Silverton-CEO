#ifndef __S2_MPS_100_TEXT_ROUTER_V1_H__
#define __S2_MPS_100_TEXT_ROUTER_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_MPS_100_Text_Router_v1_UP_DIG_INPUT 0
#define __S2_MPS_100_Text_Router_v1_DOWN_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_MPS_100_Text_Router_v1_DESTINATIONSELECTED_ANALOG_INPUT 0



#define __S2_MPS_100_Text_Router_v1_VIDEOINPUT_ANALOG_INPUT 1
#define __S2_MPS_100_Text_Router_v1_VIDEOINPUT_ARRAY_LENGTH 2
#define __S2_MPS_100_Text_Router_v1_AUDIOINPUT_ANALOG_INPUT 3
#define __S2_MPS_100_Text_Router_v1_AUDIOINPUT_ARRAY_LENGTH 2
#define __S2_MPS_100_Text_Router_v1_SOURCENAMEIN$_STRING_INPUT 5
#define __S2_MPS_100_Text_Router_v1_SOURCENAMEIN$_ARRAY_NUM_ELEMS 5
#define __S2_MPS_100_Text_Router_v1_SOURCENAMEIN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_MPS_100_Text_Router_v1, __SOURCENAMEIN$, __S2_MPS_100_Text_Router_v1_SOURCENAMEIN$_ARRAY_NUM_ELEMS, __S2_MPS_100_Text_Router_v1_SOURCENAMEIN$_ARRAY_NUM_CHARS );
#define __S2_MPS_100_Text_Router_v1_DESTINATIONNAMEIN$_STRING_INPUT 10
#define __S2_MPS_100_Text_Router_v1_DESTINATIONNAMEIN$_ARRAY_NUM_ELEMS 2
#define __S2_MPS_100_Text_Router_v1_DESTINATIONNAMEIN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_MPS_100_Text_Router_v1, __DESTINATIONNAMEIN$, __S2_MPS_100_Text_Router_v1_DESTINATIONNAMEIN$_ARRAY_NUM_ELEMS, __S2_MPS_100_Text_Router_v1_DESTINATIONNAMEIN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_MPS_100_Text_Router_v1_LINE2SCROLLARROW$_STRING_OUTPUT 0

#define __S2_MPS_100_Text_Router_v1_SERIALOUT$_STRING_OUTPUT 1
#define __S2_MPS_100_Text_Router_v1_SERIALOUT$_ARRAY_LENGTH 2

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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_MPS_100_Text_Router_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VIDEOINPUT );
   DECLARE_IO_ARRAY( __AUDIOINPUT );
   DECLARE_IO_ARRAY( __SERIALOUT$ );
   unsigned short __LINE2DISPLAY;
   DECLARE_STRING_ARRAY( S2_MPS_100_Text_Router_v1, __SOURCENAMEIN$ );
   DECLARE_STRING_ARRAY( S2_MPS_100_Text_Router_v1, __DESTINATIONNAMEIN$ );
};

START_NVRAM_VAR_STRUCT( S2_MPS_100_Text_Router_v1 )
{
};



#endif //__S2_MPS_100_TEXT_ROUTER_V1_H__

