/*
 * main.c
 *
 *  Created on: Jun 30, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	float a = 0, b = 0;
	float temp_number = 0;
	printf("Enter value of a:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b	);

	temp_number = a;
	a = b;
	b = temp_number;

	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);
}



