/*
 * main.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		char character = 0;

		printf("Enter a character: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &character);

		if(((65 <= character) && (90 >= character)) || ((97 <= character) && (122 >= character))){
			printf("%c is an alphabet \n", character);
		}
		else{
			printf("%c is not an alphabet \n", character);
		}
	}
}









