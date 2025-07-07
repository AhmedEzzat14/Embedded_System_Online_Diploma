/*
 * main.c
 *
 *  Created on: Jul 4, 2025
 *  Author: Ahmed Ezzat
 */


#include <stdio.h>

void Print_Prime_Numbers(int num1, int num2);

int main(void){
	while(1){
		int num1 = 0, num2 = 0;

		printf("Enter the two numbers: ");
		fflush(stdin); fflush(stdout);
		scanf("%d %d", &num1, &num2);

		Print_Prime_Numbers(num1, num2);
	}

}

void Print_Prime_Numbers(int num1, int num2){
	int array_counter = 0;
	int array[100];
	int i, j, temp;
	int flag;

	/* Ensure num1 < num2 */
	if(num1 > num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	/* Special case: no range */
	if ((num2 - num1) <= 1){
		printf("There's no prime number between %d & %d\n", num1, num2);
		return;
	}

	/* Loop from num1+1 to num2-1 */
	for(i = num1 + 1; i < num2; i++){
		if (i == 2){
			array[array_counter++] = i;
		}
		else if (i > 2 && i % 2 != 0){
			flag = 0;
			for(j = 3; j * j <= i; j += 2){
				if(i % j == 0){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				array[array_counter++] = i;
			}
		}
	}

	/* Print results */
	if(array_counter == 0){
		printf("There's no prime number between %d & %d\n", num1, num2);
	}
	else{
		printf("The Prime numbers between %d and %d are: ", num1, num2);
		for(i = 0; i < array_counter; i++){
			printf("%d ", array[i]);
		}
		printf("\n");
	}
}
