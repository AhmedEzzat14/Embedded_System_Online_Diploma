/*
 * main.c
 *
 *  Created on: Jun 30, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	int number = 0;
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i", &number);
	printf("You entered: %i", number);
}
