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

//instantiation
int main(void)
{
	int    c3, c2, c1, c0, i = 1; // coefficients of polynomial
	double a, b,           // endpoints
	       pA, pB;         // function values at endpoints
	double m, pM;          // midpoint and function value at midpoint

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");
	scanf("%lf %lf", &a, &b);


    do{
        m = (a + b) / 2;
        pA = polynomial(a, c3, c2, c1, c0);
        pB = polynomial(b, c3, c2, c1, c0);
        pM = polynomial(m, c3, c2, c1, c0);
        printf(" \"#%d: a = %.4f; b = %.4f; m = %.4f p(a) = %.4f; p(b) = %.4f; p(m) = %.4f\n; p(b)-p(a) = %.4f\n",
               i, a, b, m, pA, pB, pM, pB-pA);

        if(pM > 0){
            b = m;
        }else if(pM < 0){
            a = m;
        }
        i++;
    }while((fabs(pM) >= STDERR));

    if(fabs(b - a) > STDERR){
        m = (a + b) / 2;
        pM = polynomial(m, c3, c2, c1, c0);
    }

    //printing of results
	printf("root = %f\n", m);
	printf("p(root) = %f\n", pM);

	return 0;
}

double polynomial (double x, int c3, int c2, int c1, int c0){
    return c3 * pow(x, 3) + c2 * pow(x, 2) + c1 * x +c0;
}
