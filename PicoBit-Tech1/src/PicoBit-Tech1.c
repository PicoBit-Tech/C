/*
 ============================================================================
 Name        : PicoBit-Tech.c
 Author      : Behnam Jafari Touchaei
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
# include "stdint-gcc.h"

int main(void) {
	uint8_t varU8;
	uint16_t varU16;
	printf("test:%lld",sizeof(varU8));
	printf("test:%lld",sizeof(varU16));
	return 0;
}
