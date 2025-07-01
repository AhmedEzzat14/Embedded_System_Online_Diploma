/*
 * main.c
 *
 *  Created on: Jun 30, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		int number = 0;
		printf("Enter an integer you want to check: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%i", &number);

		if((number % 2) == 0){
			printf("%i is even \n", number);
		}
		else{
			printf("%i is odd \n", number);
		}
	}
}


