/*
 * main.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	float matrix[100][100];
	float number = 0;

	int row,column;
	int row_new,column_new;
	int i,j;

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

	/* Enter the Number We Want to Insert */
	printf("Enter the Number insert: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &number);

	printf("-------------------------- \n");

	/* Enter the Location We Want to Insert Number in */
	printf("Enter the Location: ");
	fflush(stdin); fflush(stdout);
	scanf("%i %i", &row_new, &column_new);

	printf("-------------------------- \n");

	/* Assign the Number in Desired Location */
	matrix[row_new - 1][column_new - 1] = number;

	/* Print the New Matrix */
	for(i = 0; i < row; i++){
		for(j = 0; j < column; j++){
			printf("%0.2f \t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
