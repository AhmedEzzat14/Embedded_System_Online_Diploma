/*
 * main.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	float matrix[2][2];
	float average = 0;
	int i,j;

	/* Take Elements of the Matrix */
	printf("Enter elements of the matrix: \r\n");

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter matrix[%d][%d]: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrix[i][j]);
		}
	}

	/* Calculate average of matrix */
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			average += matrix[i][j];
		}
	}
	average /= i*j;
	printf("%0.2f",average);
	printf("\n");

	return 0;
}


