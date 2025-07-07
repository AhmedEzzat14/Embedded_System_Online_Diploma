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

		int length_of_the_string = 0;
		int i;

		/* Enter the String */
		printf("Enter your text: ");
		fflush(stdin); fflush(stdout);
		gets(string);


		/* Check the Length of the String */
		for(i = 0; string[i] != '\0'; i++){
			length_of_the_string++;
		}

		/* Print the Length of the String */
		printf("Length of the String is: %d \n", length_of_the_string);
	}
}
