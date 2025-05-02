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


int main(void) {
	float temp;
	printf("please enter temperature");
	scanf("%f",&temp);
	if(temp>=30) {
		printf("turn on cooler\n");
		printf("turn off heater\n");
		printf("turn off fan\n");
	}
	else if(temp<=20) {
		printf("turn on heater\n");
		printf("turn off cooler\n");
		printf("turn off fan\n");
	}
	else if(temp<30 && temp>20) {
		printf("turn on fan\n");
		printf("turn off cooler\n");
		printf("turn off heater\n");
	}
	else {
		printf("invalid temperature\n");
	}
	return 0;
}
