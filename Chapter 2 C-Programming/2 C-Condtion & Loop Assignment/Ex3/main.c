/*
 * main.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		float number_1 = 0, number_2 = 0, number_3 = 0;
		printf("Enter three numbers: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f %f", &number_1, &number_2, &number_3);

		if(number_1 > number_2){
			if(number_1 > number_3){
				printf("Largest number = %f \n", number_1);
			}
			else{
				printf("Largest number = %f \n", number_3);
			}
		}
		else{
			if(number_2 > number_3){
				printf("Largest number = %f \n", number_2);
			}
			else{
				printf("Largest number = %f \n", number_3);
			}
		}
	}
}



