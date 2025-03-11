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
//# include "stdint-gcc.h"

int main(void) {
	uint8_t  varU8;
	uint16_t varU16;
	uint32_t varU32;
	uint64_t varU64;
	int8_t   var8;
	int16_t  var16;
	int32_t  var32;
	int64_t  var64;
	printf("uint8_t :%llu Byte MIN:0 ...MAX:%u \n",sizeof(varU8),UINT8_MAX);
	printf("int8_t  :%llu Byte MIN:%d ...MAX:%d\n",sizeof(var8),INT8_MIN,INT8_MAX);
	printf("uint16_t:%llu Byte MIN:0 ...MAX:%u\n",sizeof(varU16),UINT16_MAX);
	printf("int16_t :%llu Byte MIN:%d ...MAX:%d\n",sizeof(var16),INT16_MIN,INT16_MAX);
	printf("uint32_t:%llu Byte MIN:0 ...MAX:%u\n",sizeof(varU32),UINT32_MAX);
	printf("int32_t :%llu Byte MIN:%d ...MAX:%d\n",sizeof(var32),INT32_MIN,INT32_MAX);
	printf("uint64_t:%llu Byte MIN:0 ...MAX:%llu\n",sizeof(varU64),UINT64_MAX);
	printf("int8_t  :%llu Byte MIN:%lld ... MAX:%lld\n",sizeof(var64),INT64_MIN,INT64_MAX);

	return 0;
}
