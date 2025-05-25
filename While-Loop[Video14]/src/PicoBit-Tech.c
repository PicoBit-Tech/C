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
#include <math.h>
#define NUM 10
#define COND 20
int main() {
	uint32_t iCond=NUM ;
	uint32_t iLoop=1 ;
	printf("while Loop:");
	printf("     ");
	while(iCond<=COND) {
		printf("%4d",iLoop);
		iLoop++;
		iCond++;
	}
	iLoop=1;
	iCond=NUM;
	printf("\n\ndo...while Loop:");
	do{
		printf("%4d",iLoop);
		iLoop++;
		iCond++;
	}while(iCond<=COND) ;
    return 0;
}

