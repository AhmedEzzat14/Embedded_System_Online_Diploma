/*
 * main.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		char operator = 0;
		float operand_1 = 0, operand_2 = 0;

		printf("Enter operator either + or - or * or /: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &operator);

		printf("Enter two operands: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f", &operand_1, &operand_2);


		switch(operator){
			case '+': printf("%f + %f = %f \n", operand_1, operand_2, operand_1 + operand_2); break;
			case '-': printf("%f - %f = %f \n", operand_1, operand_2, operand_1 - operand_2); break;
			case '*': printf("%f * %f = %f \n", operand_1, operand_2, operand_1 * operand_2); break;
			case '/': printf("%f / %f = %f \n", operand_1, operand_2, operand_1 / operand_2); break;
			default : printf("Invalid input \n");
		}
	}
}






