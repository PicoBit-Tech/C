/*
 * func_pro.c
 *
 *  Created on: Aug 6, 2025
 *      Author: PicoTech
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
//declare function
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
