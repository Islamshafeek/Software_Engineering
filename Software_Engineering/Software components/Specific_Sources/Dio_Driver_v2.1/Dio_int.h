/*
 * Dio_int.h
 *
 *  Created on: Jan 9, 2021
 *      Author: micro
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_


#define	DIO_u8OUTPUT              1
#define	DIO_u8INPUT	              0

#define	DIO_u8HIGH	              1
#define	DIO_u8LOW	              0


#define DIO_u8PORT_0	          0
#define DIO_u8PORT_1	          1
#define DIO_u8PORT_2	          2
#define DIO_u8PORT_3	          3

/*                              PINS                           */
#define DIO_u8PIN_0	              0
#define DIO_u8PIN_1               1
#define DIO_u8PIN_2               2
#define DIO_u8PIN_3               3
#define DIO_u8PIN_4               4
#define DIO_u8PIN_5               5
#define DIO_u8PIN_6               6
#define DIO_u8PIN_7               7
#define DIO_u8PIN_8               8
#define DIO_u8PIN_9               9
#define DIO_u8PIN_10              10
#define DIO_u8PIN_11              11
#define DIO_u8PIN_12              12
#define DIO_u8PIN_13              13
#define DIO_u8PIN_14              14
#define DIO_u8PIN_15              15
#define DIO_u8PIN_16              16
#define DIO_u8PIN_17              17
#define DIO_u8PIN_18              18
#define DIO_u8PIN_19              19
#define DIO_u8PIN_20              20
#define DIO_u8PIN_21              21
#define DIO_u8PIN_22              22
#define DIO_u8PIN_23              23
#define DIO_u8PIN_24              24
#define DIO_u8PIN_25              25
#define DIO_u8PIN_26              26
#define DIO_u8PIN_27              27
#define DIO_u8PIN_28              28
#define DIO_u8PIN_29              29
#define DIO_u8PIN_30              30
#define DIO_u8PIN_31              31


/* Public Function: Dio_vidSetPinVal												   *
 * Description: This function is used to change the sw pin Value
 * Input parameters:
 * 					- Copy_u8SwPinId	:	in range { DIO_u8PIN_0 ->  DIO_u8PIN_31 }
 * 					- Copy_u8SwPinVal	:	in range { DIO_u8LOW   ->  DIO_u8HIGH   }
 * Return:
 * 					- Not applicable (void)
 *
 * Input/Output Parameter:
 * 					- Not Applicable
 *
 **************************************************************************************/
void	Dio_vidSetPinVal(u8 Copy_u8SwPinId,u8 Copy_u8SwPinVal);

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
void	Dio_vidTogglePin(u8 Copy_u8SwPinId);


/* Public Function: Dio_vidSetPinDir												   *
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

u8 	Dio_u8GetPinVal(u8 CopySwPinId);

/* Public Function: Dio_vidWritePortDir												   *
 * Description: This function is used to change the sw DDR port value
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

void 	Dio_vidWritePortDir(u8 Copy_u8SwPortId,u8 Copy_u8SwPortVal);

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

void 	Dio_vidWritePortVal(u8 Copy_u8SwPortId,u8 Copy_u8SwPortVal);



#endif /* DIO_INT_H_ */
