/*
 * main.c
 *
 *  Created on: Jul 17, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	int m = 29;
	int *ab = &m;

	printf("Address of m : 0x%p \n", &m);
	printf("Value of m : %d \n", m);

	printf("Now ab is assigned with the address of m \n");
	printf("Address of pointer ab : 0x%p \n", ab);
	printf("Content of pointer ab : %d \n", *ab);

	printf("The value of m assigned to 34 now. \n");
	printf("Address of pointer ab : 0x%p \n", ab);
	printf("Content of pointer ab : %d \n", *ab);

	printf("The pointer variable ab is assigned with the value 7 now. \n");
	printf("Address of pointer ab : 0x%p \n", ab);
	printf("Content of pointer ab : %d \n", *ab);

	return 0;
}
