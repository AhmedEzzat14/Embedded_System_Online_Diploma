/*
 * main.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		int number = 0;
		int i;
		int factorial = 1;

		printf("Enter an integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%i", &number);

		if(0 > number){
			printf("Error!!! Factorial of negative number doesn't exist. \n");
		}
		else if(0 == number){
			printf("Factorial = 1 \n");
		}
		else{
			for(i= 1 ; i <= number; i++){
				factorial *= i;
			}
			printf("Factorial = %i \n", factorial);
		}
	}
}






