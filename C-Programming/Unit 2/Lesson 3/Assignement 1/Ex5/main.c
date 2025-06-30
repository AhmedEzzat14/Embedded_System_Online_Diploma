/*
 * main.c
 *
 *  Created on: Jun 30, 2025
  *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	char character = 0;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);
	printf("ASCII value of %c = %i", character, character);
}



