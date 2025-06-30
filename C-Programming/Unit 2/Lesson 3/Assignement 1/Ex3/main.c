/*
 * main.c
 *
 *  Created on: Jun 30, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	int number_1 = 0, number_2 = 0;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i %i", &number_1, &number_2);
	printf("Sum: %i", number_1 + number_2);
}

