/**
 * CS1010 AY2011/2 Semester 1 Lab3 Ex1
 * rectangles.c
 * <Type your name here>
 * <Type your discussion group here>
 * <Fill in a description of this program>
 */

#include <stdio.h>

void adjustCorners(float *, float *, float *, float *);
void typeAndArea(float, float, float, float, float, float, float, float,
                 int *, float *);

int main(void)
{
	float rectAx1, rectAy1, rectAx2, rectAy2; // 1st rectangle
	float rectBx1, rectBy1, rectBx2, rectBy2; // 2nd rectangle
	float area; // overlapped area

	// read inputs
	printf("Enter one corner of 1st rectangle: ");
	scanf("%f %f", &rectAx1, &rectAy1);
	printf("Enter opp corner of 1st rectangle: ");
	scanf("%f %f", &rectAx2, &rectAy2);

	printf("Enter one corner of 2nd rectangle: ");
	scanf("%f %f", &rectBx1, &rectBy1);
	printf("Enter opp corner of 2nd rectangle: ");
	scanf("%f %f", &rectBx2, &rectBy2);

	printf("Overlapped area = %.2f\n", area);

	return 0;
}

