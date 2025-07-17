/*
 * main.c
 *
 *  Created on: Jul 17, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

struct S_EmployeeData{
	char name[50];
	int ID;
};

int main(void){
	struct S_EmployeeData employee1 = {"Ahmed",22010570}, employee2 = {"Fares", 21010235};

	struct S_EmployeeData *L_Arr[] = {&employee1, &employee2};

	struct S_EmployeeData *(* L_PtrArr)[2] = &L_Arr;

	printf("Employee Name: %s\n", (*L_PtrArr)[0]->name);
	printf("Employee ID:   %d\n", (*L_PtrArr)[0]->ID);

	printf("Employee Name: %s\n", (*L_PtrArr)[1]->name);
	printf("Employee ID:   %d\n", (*L_PtrArr)[1]->ID);
}