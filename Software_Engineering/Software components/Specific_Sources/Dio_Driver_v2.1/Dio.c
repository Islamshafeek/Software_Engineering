/*
 * Dio.c
 *
 *  Created on: Jan 9, 2021
 *      Author: micro
 */

#include "../Lib/Std_Types.h"
#include "../Lib/Bit_Math.h"
#include "../Lib/Atmega32_Registers.h"
#include"Dio_int.h"


/* Public Function: Dio_vidSetPinVal												   *
 * Description: This function is used to change the sw pin Value
 * Input parameters:
 * 					- Copy_u8SwPinId	:	in range { DIO_u8PIN_0  ->  DIO_u8PIN_31 }
 * 					- Copy_u8SwPinVal	:	in range { DIO_u8LOW    ->  DIO_u8HIGH   }
 * Return:
 * 					- Not applicable (void)
 *
 * Input/Output Parameter:
 * 					- Not Applicable
 *
 **************************************************************************************/


void	Dio_vidSetPinVal(u8 Copy_u8SwPinId,u8 Copy_u8SwPinVal)
{
	u8 Loc_u8PortId;
	u8 Loc_u8PinId;


	Loc_u8PortId = Copy_u8SwPinId  / 8 ;
	Loc_u8PinId  = Copy_u8SwPinId % 8 ;

	switch(Loc_u8PortId)
	{
	case 0:  //PORTA
		if (Copy_u8SwPinVal == DIO_u8HIGH)
		{
			SET_BIT(PORTA.Byte,Loc_u8PinId);
		}
		else
		{
			CLR_BIT(PORTA.Byte,Loc_u8PinId);
		}
		break;
	case 1:  //PORTB
		if (Copy_u8SwPinVal == DIO_u8HIGH)
		{
			SET_BIT(PORTB.Byte,Loc_u8PinId);
		}
		else
		{
			CLR_BIT(PORTB.Byte,Loc_u8PinId);
		}
		break;
	case 2:  //PORTC
		if (Copy_u8SwPinVal == DIO_u8HIGH)
		{
			SET_BIT(PORTC.Byte,Loc_u8PinId);
		}
		else
		{
			CLR_BIT(PORTC.Byte,Loc_u8PinId);
		}
		break;
	case 3:  //PORTD
		if (Copy_u8SwPinVal == DIO_u8HIGH)
		{
			SET_BIT(PORTD.Byte,Loc_u8PinId);
		}
		else
		{
			CLR_BIT(PORTD.Byte,Loc_u8PinId);
		}
		break;
	default:
		break;
	}

}


/* Public Function: Dio_vidTogglePin												   *
 * Description: This function is used to Toggle the sw pin Value
 * Input parameters:
 * 					- Copy_u8SwPinId	:	in range { DIO_u8PIN_0 ->  DIO_u8PIN_31 }
 *
 * Return:
 * 					- Not applicable (void)
 *
 * Input/Output Parameter:
 * 					- Not Applicable
 *
 **************************************************************************************/
void	Dio_vidTogglePin(u8 Copy_u8SwPinId){

	u8 Loc_u8PortId;
	u8 Loc_u8PinId;


	Loc_u8PortId = Copy_u8SwPinId  / 8 ;
	Loc_u8PinId  = Copy_u8SwPinId % 8 ;

	switch(Loc_u8PortId)
	{
	case 0:  //PORTA
			TGL_BIT(PORTA.Byte,Loc_u8PinId);
		break;
	case 1:  //PORTB
			TGL_BIT(PORTB.Byte,Loc_u8PinId);
		break;
	case 2:  //PORTC
			TGL_BIT(PORTC.Byte,Loc_u8PinId);
		break;
	case 3:  //PORTD
			TGL_BIT(PORTD.Byte,Loc_u8PinId);
		break;
	default:
		break;
	}
}


/* Public Function: Dio_u8GetPinVal												   *
 * Description: This function is used to GET the Value of sw pin
 * Input parameters:
 * 					- Copy_u8SwPinId	:	in range { DIO_u8PIN_0 -> DIO_u8PIN_31 }

 * Return:
 * 					- Loc_u8PinVal (u8)
 *
 * Input/Output Parameter:
 * 					- Not Applicable
 *
 **************************************************************************************/

u8 	Dio_u8GetPinVal(u8 	Copy_u8SwPinId)
{
	u8 Loc_u8PinVal ;
	u8 Loc_u8PortId;
	u8 Loc_u8PinId;


	Loc_u8PortId = Copy_u8SwPinId  / 8 ;
	Loc_u8PinId  = Copy_u8SwPinId  % 8 ;

	switch(Loc_u8PortId)
	{
	case 0:  //PORTA
		Loc_u8PinVal = GET_BIT(PINA.Byte,Loc_u8PinId);
		break;
	case 1:  //PORTB
		Loc_u8PinVal = GET_BIT(PINB.Byte,Loc_u8PinId);
		break;
	case 2:  //PORTC
		Loc_u8PinVal = GET_BIT(PINC.Byte,Loc_u8PinId);
		break;
	case 3:  //PORTD
		Loc_u8PinVal = GET_BIT(PIND.Byte,Loc_u8PinId);
		break;
	default:
		break;
	}
return Loc_u8PinVal ;
}


/* Public Function: Dio_vidWritePortDir												   *
 * Description: This function is used to change the sw DDR port value
 * Input parameters:
 * 					- Copy_u8SwPORTId	:	in range { DIO_u8PORT_0 ->  DIO_u8PORT_3 }
 * 					- Copy_u8SwPortVal	:	in range { 0x00         ->  0xFF         }
 * Return:
 * 					- Not applicable (void)
 *
 * Input/Output Parameter:
 * 					- Not Applicable
 *
 **************************************************************************************/

void Dio_vidWritePortDir(u8 Copy_u8SwPortId,u8 Copy_u8SwPortVal)
{
	u8 Loc_u8PortId;

	Loc_u8PortId = Copy_u8SwPortId ;


	switch(Loc_u8PortId)
	{
	case 0:  //PORTA
		ASSIGN_REG(DDRA.Byte,Copy_u8SwPortVal);
		break;
	case 1:  //PORTB
		ASSIGN_REG(DDRB.Byte,Copy_u8SwPortVal);
		break;
	case 2:  //PORTC
		ASSIGN_REG(DDRC.Byte,Copy_u8SwPortVal);
		break;
	case 3:  //PORTD
		ASSIGN_REG(DDRD.Byte,Copy_u8SwPortVal);
		break;
	default:
		break;
	}

}


/* Public Function: Dio_vidWritePortVal												   *
 * Description: This function is used to change the sw PORT port value
 * Input parameters:
 * 					- Copy_u8SwPortId	:	in range { DIO_u8PORT_0 ->  DIO_u8PORT_3 }
 * 					- Copy_u8SwPortVal	:	in range { 0x00         ->  0xFF         }
 * Return:
 * 					- Not applicable (void)
 *
 * Input/Output Parameter:
 * 					- Not Applicable
 *
 **************************************************************************************/

void Dio_vidWritePortVal(u8 Copy_u8SwPortId,u8 Copy_u8SwPortVal)
{
	u8 Loc_u8PortId;

	Loc_u8PortId = Copy_u8SwPortId ;


	switch(Loc_u8PortId)
	{
	case 0://PORTA
		ASSIGN_REG(PORTA.Byte,Copy_u8SwPortVal);
		break;
	case 1://PORTB.Byte
		ASSIGN_REG(PORTB.Byte,Copy_u8SwPortVal);
		break;
	case 2://PORTC.Byte
		ASSIGN_REG(PORTC.Byte,Copy_u8SwPortVal);
		break;
	case 3://PORTD.Byte
		ASSIGN_REG(PORTD.Byte,Copy_u8SwPortVal);
		break;
	default:
		break;
	}

}
