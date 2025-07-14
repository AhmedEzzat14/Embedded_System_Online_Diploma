/*
 * main.c
 *
 *  Created on: Jul 12, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

struct S_StudentData{
	char m_name[50];
	int m_roll;
	float m_marks;
};

struct S_StudentData GetStudentData(void);

int main(void){
	int NumberStudents = 10, i;
	struct S_StudentData Student[NumberStudents];

	printf ("Enter the information of 10 Students \n");
	for(i = 0; i < NumberStudents; i++){
		printf ("Enter the information of student No.[%d]: \n", i+1);
		Student[i] = GetStudentData();
	}

	for( i=0; i<NumberStudents; ++i){
		printf ("Student name: %s \n", Student[i].m_name );
		printf ("Student's roll number: %d \n", Student[i].m_roll);
		printf ("Student's marks: %.2f \n", Student[i].m_marks);
	}

	return 0;
}

struct S_StudentData GetStudentData(void){
	struct S_StudentData L_Student;

	printf("Enter the student name: \n");
	fflush(stdin); fflush(stdout);
	gets(L_Student.m_name);

	printf("Enter the student's roll number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &L_Student.m_roll);

	printf("Enter the student's marks: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f", &L_Student.m_marks);

	return L_Student;
}
