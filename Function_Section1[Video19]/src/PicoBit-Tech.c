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

uint32_t sumAndPrint(uint32_t a,uint32_t b);
int main() {
	uint32_t a=0,b=0;
	sumAndPrint(a,b);
	sumAndPrint(a,b);
    return 0;
}
uint32_t sumAndPrint(uint32_t a,uint32_t b){
		uint32_t s;
		printf("\nenter a:");
		scanf("%d",&a);
		printf("\nenter b:");
		scanf("%d",&b);
		s=a+b;
		printf("\ns=%d",s);
		return s;
}
