/*
 * main.c
 *
 *  Created on: Jul 17, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	char alphabets[27];
	char *L_Ptr;

	int i;

	L_Ptr = alphabets;

	printf("Pointer : Print all the alphabets: \n");
	printf("----------------------------------------\n");

	for(i = 0; i < 26; i++){
		*L_Ptr = i + 'A';
		L_Ptr++;
	}

	L_Ptr = alphabets;

	printf(" The Alphabets are : \n");

	for(i = 0; i < 26; i++){
		printf(" %c ", *L_Ptr);
		L_Ptr++;
	}

	return 0;
}
