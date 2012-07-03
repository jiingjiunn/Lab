/**
 * CS1010 AY2011/2 Semester 1 Lab2 Ex3
 * cookies.c
 * Reads in positive integer, then give Fortune Cookie message
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
#include <math.h>

//prototypes
void print_cookie(int x);
int sum_digits(int w);
int cookie_number(int n);

//instantiation
int main(void)
{
	int number; // input

	printf("Enter a positive integer: ");
	scanf("%d", &number);
    print_cookie(number);
	return 0;
}

//calculate the single digit number for fortune cookie
int cookie_number (int z){
    while(z >= 10){
        z = sum_digits(z);
    }
    return z;
}

//summation of digits of a number
int sum_digits(int w){
    int sum = 0;
        while(w >= 1){
            sum += w%10;
            w /= 10;
        }
    return sum;
}

//printing message of the fortune cookie
void print_cookie (int x){
    printf("cookie input = %d\n", x);
    switch (cookie_number(x)){
        case 1:
            printf("You will have a fine capacity for the enjoyment of life.\n");
            break;
        case 2:
            printf("Now is the time to try something new.\n");
            break;
        case 3:
            printf("Don't let doubt and suspicion bar your progress.\n");
            break;
        case 4:
            printf("Your principles mean more to you than any money or success.\n");
            break;
        case 5:
            printf("Accept the next proposition you hear.\n");
            break;
        case 6:
            printf("A handful of patience is worth more than a bushel of brains.\n");
            break;
        case 7:
            printf("You have an active mind and a keen imagination.\n");
            break;
        case 8:
            printf("You are talented in many ways.\n");
            break;
        case 9:
            printf("Treat everyone as a friend.\n");
            break;
    }
}

