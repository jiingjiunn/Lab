/**
 * CS1010 AY2011/2 Semester 1 Lab1 Ex1
 * box.c
 * This program calculates the surface area of a box, and the
 * length of the diagonal connecting two vertices furthest apart.
 * Author: Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
#include <math.h>

//Prototypes are here
double hypotenus(double x, double y);
double compute_diagonal(int x, int y, int z);
int surface(int x, int y, int z);

int main(void)
{
	//declaration of variables
    int length, width, height, area;
    double diagonal;

    printf("Enter length: "); //input length
    scanf("%d", &length);

    printf("Enter width : "); //input width
    scanf("%d", &width);

    printf("Enter height: "); //input height
    scanf("%d", &height);
	
	//calculation of surface area
	area = surface(length, width, height);
	printf("Surface area = %d\n", area);
	
	//calculation of diagonal length
    diagonal = compute_diagonal(length, width, height);
    printf("Diagonal = %.2f\n", diagonal);
    
    return 0;
}

//calculate the hypotenus of a right angle triangle
double hypotenus(double a, double b)
{
	return sqrt(pow(a,2)+pow(b,2));
}

//calculate the diagonal length of a box
double compute_diagonal(int c, int d, int e)
{
	return hypotenus(c, hypotenus(d,e));
}

//calculates the total surface area of a box
int surface(int x, int y, int z)
{
	int a = 2*x*y+2*y*z+2*z*x;
	//printf("%d,%d,%d,%d",x ,y, z, a);
	return a;
}


