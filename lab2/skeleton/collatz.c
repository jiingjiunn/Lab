/**
 * CS1010 AY2011/2 Semester 1 Lab2 Ex1
 * collatz.c
 * This program reads a natural number and computes the number
 * of iterations required to turn the input number into 1 by
 * following the Collatz sequence: half it if the number is even,
 * or triple it and add 1 if the number is odd.
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>

//prototypes
int count_iteration (int a);

int main(void)
{
    int number;

	printf("Enter a natural number: ");
    for(scanf("%d",&number); number < 0; scanf("%d",&number)){
        printf("Enter a natural number: ");
    }
	printf("Number of iterations = %d\n", count_iteration(number));

	return 0;

}
//count number of iteration for the cycle to take to reach 1
int count_iteration(int a){
    int i = 0;
    while(a > 1){
        if(a%2 == 0){
            a = a/2;
        }else{
            a = 3*a+1;
        }
        i++;
    }
    return i;
}
