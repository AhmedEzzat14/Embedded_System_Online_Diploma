/*
 * main.c
 *
 *  Created on: Jul 14, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

#define PI	3.14159

#define AREA_OF_CIRCLE(a)	(a * a * PI)

int main(void){
	float radius = 0;
	printf("Enter the number of the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	printf ("The Area of the circle is: %.2lf", AREA_OF_CIRCLE(radius));
}