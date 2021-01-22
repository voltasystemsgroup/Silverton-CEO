#ifndef __S2_ANALOG_TO_NUMERIC_DIGITAL_PULSES_V1_01_H__
#define __S2_ANALOG_TO_NUMERIC_DIGITAL_PULSES_V1_01_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_ENABLE_ENTER_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_INPUT_ANALOG_INPUT 0
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_DELAY_TIME_ANALOG_INPUT 1
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_PULSE_TIME_ANALOG_INPUT 2
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_DIGITS_ANALOG_INPUT 3




/*
* DIGITAL_OUTPUT
*/
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_ENTER_DIG_OUTPUT 0

#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_OUT_DIG_OUTPUT 1
#define __S2_Analog_To_Numeric_Digital_Pulses_v1_01_OUT_ARRAY_LENGTH 10

/*
* ANALOG_OUTPUT
*/



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

START_GLOBAL_VAR_STRUCT( S2_Analog_To_Numeric_Digital_Pulses_v1_01 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUT );
};

START_NVRAM_VAR_STRUCT( S2_Analog_To_Numeric_Digital_Pulses_v1_01 )
{
   unsigned short __NBUSY;
};



#endif //__S2_ANALOG_TO_NUMERIC_DIGITAL_PULSES_V1_01_H__

