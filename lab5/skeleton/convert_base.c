/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex2
 * convert_base.c
 * Convert number into a different base
 * Tan Jiing Jiunn
 * seaweed
 */

#include <stdio.h>

//prototypes
char digit(int);
int changeBase(int n, int b);

int main(void)
{
	int value, base;

	printf("Enter a positive decimal integer: ");
	scanf("%d", &value);

	printf("Enter target base (2-36): ");
	scanf("%d", &base);

	changeBase(value, base);

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

int changeBase(int n, int b)
{
    if(n == 0){
        return b;
    }else{
        printf("%c", digit(n%changeBase(n/b , b)));
        return b;
    }
}
