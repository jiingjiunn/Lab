/**
 * CS1010 AY2011/2 Semester 1 Lab4 Ex2
 * sequence.c
 * Calculate the maximum sum that a subsequence can provide.
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
#define ARRLEN 15

//prototype
int maxSubseqSum(int [], int);

//instantiation
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
    printf("Maximum sequence number = %d", maxSubseqSum(arr, size));

	return 0;
}

// calculate maximum subsequence sum
int maxSubseqSum(int arr[], int size)
{
	int i = 0, j = 0, subtotal = 0, temp = 0, max = 0;
	for(i = 0; i < size; i++){
        subtotal = 0;
        for(j = i; j < size; j++ ){
            subtotal += arr[j];
            if(subtotal > max){
                max = subtotal;
            }
        }
	}
	return max;
}

