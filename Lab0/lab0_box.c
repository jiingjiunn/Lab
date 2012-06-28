/**
 * CS1010 AY2011/2 Semester 1 Lab1 Ex1
 * box.c
 * This program calculates volumn of a box,
 * Author: Tan Jiing Jiunn
 */

#include <stdio.h>



int main(void)
{
    int length, width, height;
    double volumn;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width : ");
    scanf("%d", &width);

    printf("Enter height: ");
    scanf("%d", &height);

    volumn = length * width * height;

    printf("volumn = %.2f\n", volumn);
    
    return 0;
}


