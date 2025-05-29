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
	for(uint32_t i=0; i<=ENDNUM; i++) {
		if(i>=20 && i<=50) {
			printf("    x");
			continue;
		}
		printf("%4d",i);
	}
    return 0;
}

