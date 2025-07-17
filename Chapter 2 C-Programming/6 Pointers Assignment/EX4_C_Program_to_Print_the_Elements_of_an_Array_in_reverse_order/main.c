/*
 * main.c
 *
 *  Created on: Jul 17, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	int L_Arr[15];
	int L_ReversedArr[15];

	int L_Number = 0;

	int *L_Ptr = L_Arr;
	int *L_ReversedPtr = L_ReversedArr;

	int i = 0;

	printf("Enter the number of the elements: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &L_Number);

	printf("Enter the elements of the array: \n");

	for(i = 0; i < L_Number; i++){
		fflush(stdin); fflush(stdout);
		scanf("%d", L_Ptr);
		L_Ptr++;
	}

	L_Ptr = L_Arr;

	printf("The normal array : %d \n", *L_Ptr);

	for(i = 0; i < L_Number; i++){
		printf("%d : %d \n", i + 1, *L_Ptr);
		L_Ptr++;
	}

	L_Ptr = &L_Arr[L_Number - 1];

	while(0 <= i){
		*L_ReversedPtr = *L_Ptr;

		L_Ptr--;
		L_ReversedPtr++;

		--i;
	}

	L_ReversedPtr = L_ReversedArr;

	printf("The reversed array : \n");
	for(i = 0; i < L_Number; i++){
	    printf("%d : %d \n", i + 1, *L_ReversedPtr);
	    L_ReversedPtr++;
	}

	return 0;
}
