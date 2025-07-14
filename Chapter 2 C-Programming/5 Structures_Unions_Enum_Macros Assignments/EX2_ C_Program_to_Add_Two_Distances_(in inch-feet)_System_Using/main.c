/*
 * main.c
 *
 *  Created on: Jul 11, 2025
 *      Author: Ahmed Ezzat
 */

#include <stdio.h>

struct S_Distance GetDistance(void);
struct S_Distance SumDistance(struct S_Distance FirstDistance, struct S_Distance SecondDistance);

struct S_Distance{
	float m_inch;
	int m_feet;
};

int main(void){
	struct S_Distance L_FirstDistance, L_SecondDistance, L_Result;

	printf("Enter information for 1st distance \n");
	L_FirstDistance = GetDistance();

	printf("Enter information for 2nd distance \n");
	L_SecondDistance = GetDistance();

	L_Result = SumDistance(L_FirstDistance, L_SecondDistance);

	printf ("The sum of the distances is: %d',-%.1f \n", L_Result.m_feet, L_Result.m_inch);
}

struct S_Distance GetDistance(void){
	struct S_Distance L_Distance;

	printf ("Enter the distance in feet is: \n" );
	fflush (stdin); fflush(stdout);
	scanf ("%d", &L_Distance.m_feet );

	printf ("Enter the distance in inch is: \n" );
	fflush (stdin); fflush(stdout);
	scanf ("%f", &L_Distance.m_inch );

	return L_Distance;
}

struct S_Distance SumDistance(struct S_Distance FirstDistance, struct S_Distance SecondDistance){
	struct S_Distance L_Result;

	L_Result.m_feet = FirstDistance.m_feet + SecondDistance.m_feet;
	L_Result.m_inch = FirstDistance.m_inch + SecondDistance.m_inch;

	while(L_Result.m_inch >= 12){
		L_Result.m_inch = L_Result.m_inch - 12.0;
		++L_Result.m_feet;
	}

	return L_Result;
}
