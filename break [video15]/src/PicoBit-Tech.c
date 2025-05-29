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
#define ENDNUM 100
int main() {
	uint32_t isPrime ;
	for(uint32_t i=2; i<=ENDNUM; i++) {
		isPrime=1;
		for(uint32_t j=2; j<=i/2; j++) {
			if(i%j==0) {
				isPrime=0;
				break;
			}
		}
		if(isPrime==1) {
			printf("%4d",i);
		}
	}
    return 0;
}

