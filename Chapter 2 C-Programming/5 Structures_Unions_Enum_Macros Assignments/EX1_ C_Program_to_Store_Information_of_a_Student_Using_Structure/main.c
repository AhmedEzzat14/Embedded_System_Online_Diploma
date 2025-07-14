/*
 * main.c
 *
 *  Created on: Jul 11, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

struct S_StudentData GetStudentData(void);

struct S_StudentData{
	char m_name[100];
	int m_Roll;
	float m_marks;
};

struct S_StudentData G_Student1;

int main(void){
	GetStudentData();
	printf("Displaying Information  \n");
	printf("The student name is %s \n", G_Student1.m_name);
	printf("The student roll number is %i \n", G_Student1.m_Roll);
	printf("The student marks is %f \n", G_Student1.m_marks);
}

struct S_StudentData GetStudentData(void){
	printf("Enter the student information \n");
	printf("Enter the student name: ");
	fflush(stdin); fflush(stdout);
	gets(G_Student1.m_name);

	printf("Enter the student roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &G_Student1.m_Roll);

	printf("Enter the student marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &G_Student1.m_marks);

	return G_Student1;
}
