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

//main function
int main() {
	uint32_t mat[3][5] = {{10,20,30,40,50},{15,25,35,45,55},{12,22,32,42,52}};
	for(uint32_t i = 0; i < 3 ; i++){
		for(uint32_t j = 0; j < 5 ; j++){
			printf("i=%-5d j=%-5d mat=%-5d \n",i,j,mat[i][j]);
		}
	}
    return 0;
}



