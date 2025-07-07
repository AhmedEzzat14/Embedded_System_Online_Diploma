/*
 * mian.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){

	float matrix_a[2][2];
	float matrix_b[2][2];
	int i,j;

	/* Take Elements of 1st Matrix */
	printf("Enter elements of the 1st matrix: \r\n");

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter matrix_a[%d][%d]: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrix_a[i][j]);
		}
	}

	/* Take Elements of 2nd Matrix */
	printf("Enter elements of the 2st matrix: \r\n");

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter matrix_b[%d][%d]: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrix_b[i][j]);
		}
	}

	/* Sum of Two Matrices */
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			matrix_a[i][j] += matrix_b[i][j];
			printf("%0.2f \t", matrix_a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
