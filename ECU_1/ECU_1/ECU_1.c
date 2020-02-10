/*
 * ECU_1.c
 *
 * Created: 10/02/2020 11:56:27
 *  Author: ahmed_pc
 */ 
//#include <avr/io.h>

#include "USART.h"
#include "SPI_.h"
#include "softwareDelay.h"

int main(void)
{
	//char Received=0x00;
	SPI_Init_(Interrupt_Enable,SPI_Enable,LSB,Master,Leading_Edge_Rising,Leading_Edge_Sample,Frequency_16);
	
	softwareDelayMs(3000);
	while(1)
	{

		softwareDelayMs(1000);
		SPDR=0x66;
		
		while(!(SPSR& 0x80));
		softwareDelayMs(2000);
		SPDR=0x88;
		
		while(!(SPSR& 0x80));
		while(1);
		
		
	}
}


/*
int main(void)
{
	DDRB=0xBF;
	PORTB=0x00;
	char Received=0x00;
	 SPI_Init_();
	 
	//UART_init();
	//UDR = Received ;
	softwareDelayMs(9000);
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
    while(1)
    {
        //TODO:: Please write your application code 
		//UART_sendByte(Received);
		//Received = UART_recieveByte();
		//SPI_Send_(Received);
		//while(1);
		softwareDelayMs(1000);
			SPDR=0x66;
		
			while(!(SPSR& 0x80));
		softwareDelayMs(2000);
		SPDR=0x88;
		
		while(!(SPSR& 0x80));			
		while(1);	
		
		
    }
}
*/