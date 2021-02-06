/*
 * Atmega32_Registers.h
 *
 *  Created on: Jan 18, 2021
 *      Author: micro
 */

#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_



typedef union
{
	struct {
		u8 Bit0 : 1 ;
		u8 Bit1 : 1 ;
		u8 Bit2 : 1 ;
		u8 Bit3 : 1 ;
		u8 Bit4 : 1 ;
		u8 Bit5 : 1 ;
		u8 Bit6 : 1 ;
		u8 Bit7 : 1 ;
	}Bits;
	u8 Byte;
}tenuRegType;


/*                           Atmega32 Registers  								*/
#define SREG	(*((volatile tenuRegType*) 0x5F))
#define SPH		(*((volatile tenuRegType*) 0x5E))
#define SPL		(*((volatile tenuRegType*) 0x5D))
#define OCR0	(*((volatile tenuRegType*) 0x5C))
#define GICR	(*((volatile tenuRegType*) 0x5B))
#define GIFR	(*((volatile tenuRegType*) 0x5A))
#define TIMSK	(*((volatile tenuRegType*) 0x59))
#define TIFR	(*((volatile tenuRegType*) 0x58))
#define SPMCR	(*((volatile tenuRegType*) 0x57))
#define TWCR	(*((volatile tenuRegType*) 0x56))
#define MCUCR	(*((volatile tenuRegType*) 0x55))
#define MCUCSR	(*((volatile tenuRegType*) 0x54))
#define TCCR0	(*((volatile tenuRegType*) 0x53))
#define TCNT0	(*((volatile tenuRegType*) 0x52))
#define OSCCAL	(*((volatile tenuRegType*) 0x51))
#define OCDR    (*((volatile tenuRegType*) 0x51))
#define SFIOR	(*((volatile tenuRegType*) 0x50))
#define TCCR1A	(*((volatile tenuRegType*) 0x4F))
#define TCCR1B	(*((volatile tenuRegType*) 0x4E))
#define TCNT1H	(*((volatile tenuRegType*) 0x4D))
#define TCNT1L	(*((volatile tenuRegType*) 0x4C))
#define OCR1AH	(*((volatile tenuRegType*) 0x4B))
#define OCR1AL	(*((volatile tenuRegType*) 0x4A))
#define OCR1BH	(*((volatile tenuRegType*) 0x49))
#define OCR1BL	(*((volatile tenuRegType*) 0x48))
#define ICR1H	(*((volatile tenuRegType*) 0x47))
#define ICR1L	(*((volatile tenuRegType*) 0x46))
#define TCCR2	(*((volatile tenuRegType*) 0x45))
#define TCNT2	(*((volatile tenuRegType*) 0x44))
#define OCR2	(*((volatile tenuRegType*) 0x43))
#define ASSR	(*((volatile tenuRegType*) 0x42))
#define WDTCR	(*((volatile tenuRegType*) 0x41))
#define UBRRH	(*((volatile tenuRegType*) 0x40))
#define UCSRC   (*((volatile tenuRegType*) 0x40))
#define EEARH	(*((volatile tenuRegType*) 0x3F))
#define EEARL	(*((volatile tenuRegType*) 0x3E))
#define EEDR	(*((volatile tenuRegType*) 0x3D))
#define EECR	(*((volatile tenuRegType*) 0x3C))
#define PORTA	(*((volatile tenuRegType*) 0x3B))
#define DDRA	(*((volatile tenuRegType*) 0x3A))
#define PINA	(*((volatile tenuRegType*) 0x39))
#define PORTB	(*((volatile tenuRegType*) 0x38))
#define DDRB	(*((volatile tenuRegType*) 0x37))
#define PINB	(*((volatile tenuRegType*) 0x36))
#define PORTC	(*((volatile tenuRegType*) 0x35))
#define DDRC	(*((volatile tenuRegType*) 0x34))
#define PINC	(*((volatile tenuRegType*) 0x33))
#define PORTD	(*((volatile tenuRegType*) 0x32))
#define DDRD	(*((volatile tenuRegType*) 0x31))
#define PIND	(*((volatile tenuRegType*) 0x30))
#define SPDR	(*((volatile tenuRegType*) 0x2F))
#define SPSR	(*((volatile tenuRegType*) 0x2E))
#define SPCR	(*((volatile tenuRegType*) 0x2D))
#define UDR	    (*((volatile tenuRegType*) 0x2C))
#define UCSRA	(*((volatile tenuRegType*) 0x2B))
#define UCSRB	(*((volatile tenuRegType*) 0x2A))
#define UBRRL	(*((volatile tenuRegType*) 0x29))
#define ACSR	(*((volatile tenuRegType*) 0x28))
#define ADMUX	(*((volatile tenuRegType*) 0x27))
#define ADCSRA	(*((volatile tenuRegType*) 0x26))
#define ADCH	(*((volatile tenuRegType*) 0x25))
#define ADCL	(*((volatile tenuRegType*) 0x24))
#define TWDR	(*((volatile tenuRegType*) 0x23))
#define TWAR	(*((volatile tenuRegType*) 0x22))
#define TWSR	(*((volatile tenuRegType*) 0x21))
#define TWB	    (*((volatile tenuRegType*) 0x20))

#endif /* ATMEGA32_REGISTERS_H_ */
