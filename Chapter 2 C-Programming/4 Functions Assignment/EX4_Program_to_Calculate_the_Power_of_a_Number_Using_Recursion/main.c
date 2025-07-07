/*
 * main.c
 *
 *  Created on: Jul 4, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int calculate_power(int num, int power);

int main(void){
	while(1){
		int number = 0;
		int power = 0;
		int result = 0;

		/* Get the number from user */
		printf("Enter the number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &number);

		/* Get the power of number from user */
		printf("Enter the power: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &power);

		result = calculate_power(number, power);

		printf("The power %d of the number %d is %d \n", power, number, result);
	}
}

int calculate_power(int num, int power){
	/* Check if the power is 0 or 1 */
	if(0 == power){
		return 1;
	}
	else if(1 == power){
		return num;
	}
	else{
		return (num * calculate_power(num, power - 1));
	}
}
