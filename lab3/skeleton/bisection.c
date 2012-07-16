/**
 * CS1010 AY2011/2 Semester 1 Lab3 Ex2
 * bisection.c
 * Tan Jiing Jiunn
 * Seaweed
 * Deteremining the root of a polynomial by the method of bisection
 */

#include <stdio.h>
#include <math.h>
#define STDERR 0.0001

//prototype
double polynomial(double, int, int, int, int);
int decision (double pM, double a, double b);

//instantiation
int main(void)
{
	int    c3, c2, c1, c0, i = 0; // coefficients of polynomial
	double a, b,           // endpoints
	       pA, pB;         // function values at endpoints
	double m, pM;          // midpoint and function value at midpoint

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");
	scanf("%lf %lf", &a, &b);


    do{

        if(pM > 0 && i != 0){
            b = m;
        }else if(pM < 0 && i != 0){
            a = m;
        }
        m = (a + b) / 2;
        pA = polynomial(a, c3, c2, c1, c0);
        pB = polynomial(b, c3, c2, c1, c0);
        pM = polynomial(m, c3, c2, c1, c0);

        i++;
    }while(decision(pM, a, b));

    //if the difference of a and b is greater that STDERR, get average m value
    if(pM != 0){
        m = (a + b) / 2;
        pM = polynomial(m, c3, c2, c1, c0);
    }

    //printing of results
	printf("root = %f\n", m);
	printf("p(root) = %f\n", pM);

	return 0;
}

//function to calculate the value of the polynomial
double polynomial (double x, int c3, int c2, int c1, int c0){
    return c3 * pow(x, 3) + c2 * pow(x, 2) + c1 * x +c0;
}


//function to determine if loop should be terminated or not.
int decision (double pM, double a, double b){
    if(fabs(pM) == 0){
        return 0;
    }else if(fabs(b - a) < STDERR){
        return 0;
    }else{
        return 1;
    }
}
