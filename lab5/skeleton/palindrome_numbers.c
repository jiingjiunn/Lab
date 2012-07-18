/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex1
 * palindrome_numbers.c
 * Check if a program is palindrome
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
#define ARRLEN 15

//prototype
int isPalindrome(int n);
int palindromeCheck(int arr[ARRLEN], int size);

//instantiation
int main(void)
{
	int count = 0, start, end, i;

	printf("Enter start and end: ");
	scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++){
        if(isPalindrome(i)){
            count++;
        }
    }

	printf("Number of palindrome numbers = %d\n", count);

	return 0;
}

//scanning in numbers into array then call for checking function
int isPalindrome(int n){
    int arr[ARRLEN];
    int i = 0, size = 0;
    while(n > 0){
        arr[i] = n % 10;
        n = n/10;
        i++;
    }
    size = i-1;

    palindromeCheck(arr, size);
}

//checking for palindrome by recursion
int palindromeCheck(int arr[ARRLEN], int size){
    if(arr[0] != arr[size]){        //if compared pair is not the same, not palindrome
        return 0;
    }else if(size <= 1){
        return 1;
    }else{
        return palindromeCheck(arr+1, size-2); //trim off the 2 ends and continue on to check by calling itself
    }
}
