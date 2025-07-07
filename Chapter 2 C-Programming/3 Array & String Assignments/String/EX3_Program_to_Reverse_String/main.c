/*
 * main.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

int main(void){
	while(1){
		char string[100];
		char reversed_string[100];

		int length_of_the_string = 0;
		int i;

		/* Enter the String */
		printf("Enter your text: ");
		fflush(stdin); fflush(stdout);
		gets(string);

		printf("The original string: %s \n", string);

		printf("---------------------------- \n");

		/* Check the Length of the String */
		for(i = 0; string[i] != '\0'; i++){
			length_of_the_string++;
		}

		/* Assign the Reversed String */
		for(i = 0; string[i] != '\0'; i++){
			reversed_string[i] = string[length_of_the_string - 1 - i];
		}

		/* For Null Termination */
		reversed_string[length_of_the_string] = '\0';

		printf("The reversed string: %s \n", reversed_string);
		printf("---------------------------- \n");
	}
}
