/*
 ============================================================================
 Name        : PicoBit-Tech.c
 Author      : Behnam Jafari Touchaei
 Version     :
 Copyright   : NO copyright
 Description : C Programming for microcontrollers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
// Start Macro definition section
#define PRINT(msg1,msg2,msg3,msg4) do { \
	printf("1 variable:%u \n",msg1); 	\
	printf("2 variable:%u \n",msg2); 	\
	printf("3 variable:%u \n",msg3); 	\
	printf("4 variable:%u \n",msg4); 	\
	} while(0)
#define PI_VALUE 3.14
// End Macro definition section

int main(void) {
	uint8_t  countUp = 10;        //cammelCase
	uint8_t  count_up = 10;       //snake_case
	uint32_t countDown = 20;      //cammelCase
	uint32_t count_down = 20;     //snake_case
	PRINT(countUp,count_up,countDown,count_down);
	printf("PI_VALUE:%f \n",PI_VALUE);
	return 0;
}
