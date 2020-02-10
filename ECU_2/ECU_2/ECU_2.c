/*
 * ECU_2.c
 *
 * Created: 10/02/2020 11:58:29
 *  Author: ahmed_pc
 */ 


#include "USART.h"
#include "SPI_.h"

#include <avr/io.h>

//USART_init(USART_Config UART_config);

#include "softwareDelay.h"

int main(void)
{
	char Received=0x00;
SPI_Init_(Interrupt_Enable,SPI_Enable,LSB,Master,Leading_Edge_Rising,Leading_Edge_Sample,Frequency_16);

	while(1)
	{	
		while(!(SPSR& 0x80))
		{
			PORTA_DATA = Received ; 
		}
		Received=SPDR;

		
		
	}
}

/*
int main(void)
{
	DDRB=0x40;
	PORTB=0x00;
	char Received=0x55;
	SPI_Init_();
	
	//UART_init();
	//UDR = Received ;
	//softwareDelayMs(9000);
	//SPI_Send_( Received);
	// softwareDelayMs(10);
	// SPI_Send_( Received);
	//SPDR=0x66;
	//while(!(SPSR& 0x80));
	
	//SPSR= SPSR| 0x80;
	//softwareDelayMs(10);
	//SPDR=0x66;
	//while(!(SPSR& 0x80));
	
	//SPSR= SPSR| 0x80;
	
	//softwareDelayMs(10);
	PORTA=Received;
	while(1)
	{
		//TODO:: Please write your application code
		//UART_sendByte(Received);
		//Received = UART_recieveByte();
		//SPI_Send_(Received);
		//while(1);
		//softwareDelayMs(1000);
		//SPDR=0x66;
		
		while(!(SPSR& 0x80))
		{
			PORTA= Received ;
		}
		Received=SPDR;
		
		//while(!(SPSR& 0x80));
		//while(1);
		
		
	}
}
*/