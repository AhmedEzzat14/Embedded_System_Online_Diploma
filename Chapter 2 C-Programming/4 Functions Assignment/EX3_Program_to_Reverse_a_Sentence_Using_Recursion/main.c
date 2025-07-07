/*
 * main.c
 *
 *  Created on: Jul 4, 2025
 *  Author: Ahmed Ezzat
 */

#include <stdio.h>

void get_text_reverse(char *arr);

int main(void){
	while(1){
		char string[100];

		printf("Enter the text: ");
		fflush(stdin); fflush(stdout);
		gets(string);

		get_text_reverse(string);
		printf("\n");
	}
}

void get_text_reverse(char *arr){
	if(*arr != '\0'){
		get_text_reverse(arr + 1);
		printf("%c", *arr);
	}
}
