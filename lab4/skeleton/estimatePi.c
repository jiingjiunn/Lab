/**
 * CS1010 AY2011/2 Semester 1 Lab4 Ex1
 * estimatePi.c
 * This program reads in a list of n distinct integers and
 * computes the estimate value for pi.
 * This program uses an external GCD function (provided in gcd.o).
 * Tan Jiing Jiunn
 * Seaweed
 */

//prototypes
#include <stdio.h>
#include "gcd.h" //include gcd.o
#include <math.h>
#define ARRLEN 50

double pi(int [], int);

int main(void)
{
    int arr[ARRLEN] ;
    int size, i = 0, temp;
    printf("Please enter the amount of digit to be entered:");
    scanf("%d", &size);
    for(i = 0 ; i < size; i++){
        printf("Please input number %d :", i + 1);
        scanf("%d", &temp);
        arr[i] = temp;
    }
    printf("Estimated pi = %lf", pi(arr, size));
	return 0;
}

// Calculate pi
double pi(int arr[], int size)
{
    int i, j, totalpair = 0, pair = 0;

    for(i = 0 ; i < size ; i++){
        for(j = i+1 ; j < size ; j++){
            totalpair++;    //count numbers of pairs
            printf("(%d,%d)\n", arr[i], arr[j]);
            if(gcd(arr[i], arr[j]) == 1){   //if the only common factor is 1
                pair++;
            }
        }
    }
    return sqrt(6 * totalpair / pair);
}

