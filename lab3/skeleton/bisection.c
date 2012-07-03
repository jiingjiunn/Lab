/**
 * CS1010 AY2011/2 Semester 1 Lab3 Ex2
 * bisection.c
 * <Type your name here>
 * <Type your discussion group here>
 * <Fill in a description of this program>
 */

#include <stdio.h>

double polynomial(double, int, int, int, int);

int main(void)
{
	int    c3, c2, c1, c0; // coefficients of polynomial
	double a, b,           // endpoints
	       pA, pB;         // function values at endpoints
	double m, pM;          // midpoint and function value at midpoint

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");

	printf("root = %f\n", m);
	printf("p(root) = %f\n", pM);

	return 0;
}

