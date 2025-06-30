/*
 * main.c
 *
 *  Created on: Jun 30, 2025
*      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	float a = 0, b = 0;
	printf("Enter value of a:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b:  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b	);

	a = a+b;
	b = a-b;
	a = a-b;

	/* Another Way if the two numbers not float
	 a = a^b;
	 b = a^b;
	 a = a^b;
	*/

	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);
}


