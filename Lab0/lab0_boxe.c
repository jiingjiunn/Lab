/**
 * CS1010 AY2011/2 Semester 1 Lab1 Ex1
 * boxe.c
 * This program calculates volumn of a box,
 * Author: Tan Jiing Jiunn
 */

#include <stdio.h>

double volumnc (int x, int y,int z); //Declaration of function

int main(void)
{
    int length, width, height; //declaration of variables
    double volumn;

    printf("Enter length: "); 
    scanf("%d", &length);

    printf("Enter width : ");
    scanf("%d", &width);

    printf("Enter height: ");
    scanf("%d", &height);

    volumn = volumnc(length, width, height); //call to function volumnc

    printf("volumn = %.2f\n", volumn);
    
    return 0;
}

double volumnc(int x, int y, int z) //function of volumnc to compute width length and height into volumn
{
	double w;
	w = x * y * z;
	return w;
}	


