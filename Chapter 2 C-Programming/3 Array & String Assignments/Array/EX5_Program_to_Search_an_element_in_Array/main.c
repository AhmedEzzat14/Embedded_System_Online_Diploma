/*
 * main.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	while(1){
		float matrix[100][100];
		float number = 0;

		int row,column;
		int i,j;

		char not_found = 0;

		printf("Enter number of rows & columns of the matrix: ");
		fflush(stdin); fflush(stdout);
		scanf("%i %i", &row, &column);

		/* Take Elements of the Matrix */
		printf("Enter elements of the matrix: \r\n");

		for(i = 0; i < row; i++){
			for(j = 0; j < column; j++){
				printf("Enter matrix[%d][%d]: ", i+1, j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f", &matrix[i][j]);
			}
		}

		printf("-------------------------- \n");

		/* Enter the Number We Want to Search for */
		printf("Enter the Number insert: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &number);

		for(i = 0; i < row; i++){
			for(j = 0; j < column; j++){
				if(number == matrix[i][j]){
					printf("The number is found at location matrix[%d][%d] \n", i+1, j+1);
					not_found = 1;
				}
			}
		}
		if(0 == not_found){
			printf("Error!!! The number is not found \n");
		}
		printf("------------------------------- \n");
	}
}
