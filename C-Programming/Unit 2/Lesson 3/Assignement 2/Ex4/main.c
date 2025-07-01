/*
 * main.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		float number = 0;
		printf("Enter a number: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &number);

		if(0 < number){
			printf("%f is positive \n", number);
		}
		else if(0 > number){
			printf("%f is negative \n", number);
		}
		else{
			printf("You entered zero \n");
		}
	}
}



