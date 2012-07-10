/**
 * CS1010 AY2011/2 Semester 1 Lab3 Ex3
 * montecarlo.c
 * Tan Jiing Jiunn
 * Function: Calculate pi using the number of darts that went into the 1 unit radius
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//prototypes
int throwDarts(int);

//instantiation
int main(void)
{
    int darts_total,   // number of darts to be thrown
	    darts_inside;  // number of darts inside quadrant
    double pi;

	printf("How many darts? ");
	scanf("%d", &darts_total);

	darts_inside = throwDarts(darts_total);

	pi = 4 * ((double)darts_inside / (double)darts_total) ;//calculation of pi based on darts that went in

	printf("Darts landed inside the quadrant = %d\n", darts_inside);
	printf("pi = %lf\n", pi);

    return 0;
}

//compute the number of darts are within the 1 unit radius
int throwDarts(int darts_total){
    int i, sum = 0;
    float x, y;
    for (i = 0; i < darts_total ; i++){
        x = ((float)rand() / ((double)RAND_MAX ));
        y = ((float)rand() / ((double)RAND_MAX ));
        if( (pow(x,2) + pow(y,2)) <= 1){
            sum++;
        }
    }
return sum;
}

