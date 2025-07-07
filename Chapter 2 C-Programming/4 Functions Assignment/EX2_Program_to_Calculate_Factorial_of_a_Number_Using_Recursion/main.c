/*
 * main.c
 *
 *  Created on: Jul 4, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int calculate_factorial(int num);

int main(void){
	while(1){
		int number = 0, result = 0;

		/* Get the number from the user */
		printf("Enter the number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &number);

		result = calculate_factorial(number);

		printf("The factorial of the number %d is %d \n", number, result);
	}
}

int calculate_factorial(int num){
	/* Check if the number is 0 or 1 */
	if((1 == num) || (0 == num)){
		return 1;
	}
	else{
		return (num * calculate_factorial(num - 1));
	}
}
