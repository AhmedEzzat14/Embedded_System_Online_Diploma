/*
 * main.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	float matrix[100][100];
	float transpose_matrix[100][100];

	int row,column;
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

	/* Calculate Transpose Matrix */
	for(i = 0; i < row; i++){
		for(j = 0; j < column; j++){
			transpose_matrix[j][i] = matrix[i][j];
		}
	}

	printf("The Normal Matrix \r\n");

	/* Printing the Normal Matrix */
	for(i = 0; i < row; i++){
		for(j = 0; j < column; j++){
			printf("%0.2f \t",matrix[i][j]);
		}
		printf("\n");
	}

	printf("----------------------- \n");

	printf("The Transpose Matrix \r\n");

	/* Printing the Transpose Matrix */
	for(i = 0; i < column; i++){
			for(j = 0; j < row; j++){
				printf("%0.2f \t",transpose_matrix[i][j]);
			}
			printf("\n");
		}

	return 0;
}
