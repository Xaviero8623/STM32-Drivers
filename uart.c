#include "stm32f3xx.h"
#include "gpio.h"

void UART1_Init(void) {
	
	SetPinAlt(PA9,HS,AF7); // set pins alternate functions
	SetPinAlt(PA10,HS,AF7); // set pins alternate functions 
	
	RCC -> APB1ENR |= 1<<17; // enable USART 2 clock
	
	USART1 -> BRR |= 0x341; // Set Baud rate to 9600
	
	USART1 -> CR1 |= 1<<2; // receiver enabled
	
	USART1 -> CR1 |= 1<<3; // transmitter enabled
	
	USART1 -> CR1 |= 1; // USART enabled
}

void UART1_Send(char msg) {
	USART1->TDR = msg; // send char message
	while(!(USART2 -> ISR & (1<<7))); // wait for message to send(tranmssion register empty check)
}

char UART1_Receive(void) {
	char msg = 0;
	msg = USART1 -> RDR; // load value into char
	return msg;
}

void UART2_Init(void) {
	
	SetPinAlt(PA2,HS,AF7); // set pins alternate functions
	SetPinAlt(PA3,HS,AF7); // set pins alternate functions 
	
	RCC -> APB1ENR |= 1<<17; // enable USART 2 clock
	
	USART2 -> BRR |= 0x341; // Set Baud rate to 9600
	
	USART2 -> CR1 |= 1<<2; // receiver enabled
	
	USART2 -> CR1 |= 1<<3; // transmitter enabled
	
	USART2 -> CR1 |= 1; // USART enabled
}

void UART2_Send(char msg) {
	USART2->TDR = msg; // send char message
	while(!(USART2 -> ISR & (1<<7))); // wait for message to send(tranmssion register empty check)
}

char UART2_Receive(void) {
	char msg = 0;
	msg = USART2 -> RDR; // load value into char
	return msg;
}

void UART3_Init(void) {
	
	SetPinAlt(PB10,HS,AF7); // set pins alternate functions
	SetPinAlt(PB11,HS,AF7); // set pins alternate functions 
	
	RCC -> APB1ENR |= 1<<17; // enable USART 2 clock
	
	USART3 -> BRR |= 0x341; // Set Baud rate to 9600
	
	USART3 -> CR1 |= 1<<2; // receiver enabled
	
	USART3 -> CR1 |= 1<<3; // transmitter enabled
	
	USART3 -> CR1 |= 1; // USART enabled
}

void UART3_Send(char msg) {
	USART3->TDR = msg; // send char message
	while(!(USART2 -> ISR & (1<<7))); // wait for message to send(tranmssion register empty check)
}

char UART3_Receive(void) {
	char msg = 0;
	msg = USART3 -> RDR; // load value into char
	return msg;
}
