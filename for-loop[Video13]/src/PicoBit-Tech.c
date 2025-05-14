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

int main() {
	printf("    ");
	for(int i=0; i<=10; i++) {
		printf("%4d", i);
	}
	printf("\n");
	printf("   ");
	for(int i=0; i<=44; i++) {
		printf("%c", '-');
	}
	printf("\n");
	for(int i=0; i<=10; i++) {
		printf("%2d |",i);
		for(int j=0; j<=10; j++) {
			printf("%4d", i*j);
		}
		printf("\n");
	}
    return 0;
}

