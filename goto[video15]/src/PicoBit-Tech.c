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
		uint32_t a,b;
		printf("enter number a:");
		scanf("%d",&a);
		printf("\nenter number b:");
		scanf("%d",&b);
		if(b==0) {
			goto error;
		}
		else{
			goto end;
		}
	error:
		printf("\nerror\n");
	end:
		printf("end");
    return 0;
}

