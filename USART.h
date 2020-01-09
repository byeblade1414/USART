#ifndef _UART_HEADER
#define _UART_HEADER

#ifndef _AVR_ATMEGA32A_H_INCLUDED
#include <avr/io.h>
#endif

#ifndef _UTIL_DELAY_H_
#define F_CPU 16000000UL
#include <util/delay.h>
#endif



#ifndef BAUDRATE
#define BAUDRATE 9600
#endif

#define BAUD_PRESCALLER (((F_CPU / (BAUDRATE * 16UL))) - 1)

void USART_init(void);
unsigned char USART_receive(void);
void USART_send( unsigned char data);
void USART_putstring(char* StringPtr);

#endif

