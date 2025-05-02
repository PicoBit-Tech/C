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
	int32_t row, col ;
	uint8_t key ;
	while(1) {
		printf("Simulation 3x3 matrix keyboard\n\n");
			printf("enter row number:");
			scanf("%d",&row);
			printf("enter column number:");
			scanf("%d",&col);
			switch(row) {
			case(0): {
				if(col==0) key=1 ;
				else if(col==1) key=2 ;
				else if(col==2) key=3 ;
				else key='?';
				break;
				}
			case(1): {
				if(col==0) key=4 ;
				else if(col==1) key=5 ;
				else if(col==2) key=6 ;
				else key='?';
				break;
				}
			case(2): {
				if(col==0) key=7 ;
				else if(col==1) key=8 ;
				else if(col==2) key=9 ;
				else key='?';
				break;
				}
			default: {
				key='?';
				}
			}
			if(key!='?') printf("key=%d\n\n",key);
			else printf("invalid key\n\n");
	}

	return 0;
}
