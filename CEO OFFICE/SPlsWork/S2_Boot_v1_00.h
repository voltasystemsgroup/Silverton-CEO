#ifndef __S2_BOOT_V1_00_H__
#define __S2_BOOT_V1_00_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Boot_v1_00_RESET_FIRST_BOOT_DIG_INPUT 0


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_Boot_v1_00_PRE_BOOT_DIG_OUTPUT 0
#define __S2_Boot_v1_00_FIRST_BOOT_DIG_OUTPUT 1
#define __S2_Boot_v1_00_FIRST_BOOT_COMPLETED_FB_DIG_OUTPUT 2
#define __S2_Boot_v1_00_BOOT_DIG_OUTPUT 3


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
#define __S2_Boot_v1_00_SBOOTFIRST_STRING_MAX_LEN 64
CREATE_STRING_STRUCT( S2_Boot_v1_00, __SBOOTFIRST, __S2_Boot_v1_00_SBOOTFIRST_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Boot_v1_00 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Boot_v1_00 )
{
   DECLARE_STRING_STRUCT( S2_Boot_v1_00, __SBOOTFIRST );
};



#endif //__S2_BOOT_V1_00_H__

