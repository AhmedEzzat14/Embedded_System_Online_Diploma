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
		int sum = 0;

		printf("Enter an integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%i", &number);

		if(0 > number){
			printf("Error!!! Negative number. \n");
		}
		else{
			for(i = 0 ; i <= number; i++){
				sum += i;
			}
			printf("sum = %i \n", sum);
		}
	}
}









