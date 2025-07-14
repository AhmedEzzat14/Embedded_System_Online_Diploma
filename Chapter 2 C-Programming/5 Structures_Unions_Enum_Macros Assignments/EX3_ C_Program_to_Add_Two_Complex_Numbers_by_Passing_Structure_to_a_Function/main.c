/*
 * main.c
 *
 *  Created on: Jul 11, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

struct S_Number{
	float m_real;
	float m_imaginary;
};

struct S_Number GetNumbers(void);
struct S_Number SumNumbers(struct S_Number FirstNumber, struct S_Number SecondNumber);


int main(void){
	struct S_Number L_FirstNumber, L_SecondNumber, L_Result;

	printf("Enter first number information \n");
	L_FirstNumber = GetNumbers();

	printf("Enter second number information \n");
	L_SecondNumber = GetNumbers();

	L_Result = SumNumbers(L_FirstNumber, L_SecondNumber);

	printf("The sum of the two numbers are %f + %fi \n", L_Result.m_real, L_Result.m_imaginary);
}

struct S_Number GetNumbers(void){
	struct S_Number L_Number;

	printf("Enter the real part: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &L_Number.m_real);

	printf("Enter the imaginary part: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &L_Number.m_imaginary);

	return L_Number;
}

struct S_Number SumNumbers(struct S_Number FirstNumber, struct S_Number SecondNumber){
	struct S_Number L_Result;

	L_Result.m_real = FirstNumber.m_real + SecondNumber.m_real;
	L_Result.m_imaginary = FirstNumber.m_imaginary + SecondNumber.m_imaginary;

	return L_Result;
}
