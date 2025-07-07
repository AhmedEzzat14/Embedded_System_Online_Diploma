/*
 * main.c
 *
 *  Created on: Jul 2, 2025
 *  Author: Ahmed Ezzat
 */

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
		char character_to_search_for = 0;

		int number_of_iterations = 0;
		int i;

		/* Enter the String */
		printf("Enter your text: ");
		fflush(stdin); fflush(stdout);
		gets(string);

		/* Enter the Character to search for */
		printf("Enter the character to search for: ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &character_to_search_for);

		/* Check All the Characters in the String */
		for(i = 0; string[i] != '\0'; i++){
			if(string[i] == character_to_search_for){
				number_of_iterations++;
			}
		}

		/* Print the Number of Repeated Times */
		printf("Number of times that character is repeated is: %d \n", number_of_iterations);
	}
}

