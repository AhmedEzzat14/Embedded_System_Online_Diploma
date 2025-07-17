/*
 * main.c
 *
 *  Created on: Jul 17, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	char L_String[30];
	char L_ReverseString[30];

	int i = -1;

	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(L_String);

	char *L_Ptr = L_String;
	char *L_ReversedPtr = L_ReverseString;

	printf("The normal string is : %s \n", L_Ptr);

	while(*L_Ptr){
		L_Ptr++;
		i++;
	}

	while(0 <= i){
		L_Ptr--;

		*L_ReversedPtr = *L_Ptr;
		L_ReversedPtr++;

		--i;
	}

	*L_ReversedPtr = '\0';

	L_ReversedPtr = L_ReverseString;

	printf("The reversed string is : %s \n", L_ReversedPtr);
}
