/*
 * main.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

void main(void){
	while(1){
		char character = 0;
		printf("Enter an alphabet: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &character);

		switch(character){
			case 'a':
			case 'A': printf("%c is a vowel. \n", character); break;

			case 'e':
			case 'E': printf("%c is a vowel. \n", character); break;

			case 'i':
			case 'I': printf("%c is a vowel. \n", character); break;

			case 'o':
			case 'O': printf("%c is a vowel. \n", character); break;

			case 'u':
			case 'U': printf("%c is a vowel. \n", character); break;

			default: printf("%c is a constant. \n", character);
		}
	}
}
