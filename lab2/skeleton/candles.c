/**
 * CS1010 AY2011/2 Semester 1 Lab2 Ex2
 * candles.c
 * Count the number of burnt with a fixed amount of starting number of candles
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
//prototypes
int count_candles(int x, int y);

//instantiation
int main(void){
    int n, k, total; // declaration of variables

	printf("Enter number of candles and \n");
	scanf ("%d", &n);
	printf("number of residuals to make a new candle: ");
    scanf ("%d", &k);
    total = count_candles(n , k);
	printf("Total candles burnt = %d\n",total);

	return 0;
}

//function to count candles
int count_candles(int x, int y){
    int i = 1;
    for (i = 1; i <= x ; i++){
        if( i % y == 0 && i != 0){
            ++x;
        }
        printf("x = %d, i = %d\n", x, i);

    }
    return i-1;
}
