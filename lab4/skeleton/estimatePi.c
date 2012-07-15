/**
 * CS1010 AY2011/2 Semester 1 Lab4 Ex1
 * estimatePi.c
 * This program reads in a list of n distinct integers and
 * computes the estimate value for pi.
 * This program uses an external GCD function (provided in gcd.o).
 * <Type your name here>
 * <Type your discussion group here>
 */
#include <stdio.h>
#include "gcd.h"
#include <math.h>
#define ARRLEN 30

double pi(int [], int);

int main(void)
{
    int arr[ARRLEN], size = 0;
    for(scanf("%d", &arr[size]); arr[size] != '\n' ;size++){
        printf("\ninput %d = %d\n", size, arr[size]);
    }
	return 0;
}

// Write a description of the function here
double pi(int arr[], int size)
{
    int i, j, totalpair = 0, pair = 0;

    for(i = 0 ; i < ARRLEN -1 ; i++){
        for(j = i+1 ; j < ARRLEN - 1 ; j++){
            totalpair++;
            if(gcd(arr[i], arr[j]) == 1){
                pair++;
            }
        }
    }
    return sqrt(6 * totalpair / pair);
	return 1.23; // Just a stub; replace it with the correct answer
}

