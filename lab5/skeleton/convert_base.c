/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex2
 * convert_base.c
 * Convert number into a different base
 * Tan Jiing Jiunn
 * seaweed
 */

#include <stdio.h>
#include <stdlib.h>

//prototypes
char digit(int);
int changeBase(int n, int b, char* converted[9]);

//instantiation
int main(void)
{
	int value, base;
	char converted[9];

	printf("Enter a positive decimal integer: ");
	scanf("%d", &value);

	printf("Enter target base (2-36): ");
	scanf("%d", &base);

	changeBase(value, base, &converted);
    converted[sizeof(converted)+1] = '\0';
    printf("%s",converted);
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

//convert decimals to desired base
int changeBase(int n, int b, char* converted[9])
{
    int count;
    if(n <= 10){
        return 0;
    }else{
        printf("1");
        count = changeBase( n%b , b, converted);
        converted[count] = digit(n/b);
        return count++;
    }
}
