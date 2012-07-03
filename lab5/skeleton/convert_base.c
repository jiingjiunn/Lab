/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex2
 * convert_base.c
 * <Type in description of program>
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>

char digit(int);

int main(void)
{
	int value, base;

	printf("Enter a positive decimal integer: ");
	scanf("%d", &value);

	printf("Enter target base (2-36): ");
	scanf("%d", &base);

	return 0;
}

// to convert a 'digit' into its corresponding letter 
char digit(int d)
{
	if (d > 9)
		return (char) ((int) 'A' + d - 10);
	else
		return (char) ((int) '0' + d);
}

