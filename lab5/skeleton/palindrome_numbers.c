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
int palindromeCheck(int arr[ARRLEN], int, int);
int sumPalindrome(int start, int end);

//instantiation
int main(void)
{
	int start, end;

	printf("Enter start and end: ");
	scanf("%d %d", &start, &end);
    printf("Number of palindrome numbers = %d\n", sumPalindrome(start, end));

	return 0;
}

//using recursion to count the number of palindrom in the range start to end
sumPalindrome(int start, int end){
    if (start == end){
        return isPalindrome(start);
    }else{
        return sumPalindrome(start+1, end) + isPalindrome(start);
    }
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

    palindromeCheck(arr, 0, size);
}

//checking for palindrome by recursion
int palindromeCheck(int arr[ARRLEN],int left, int right){
    if(arr[left] != arr[right]){        //if compared pair is not the same, not palindrome
        return 0;
    }else if(right-left<=1){
        return 1;
    }else{
        return palindromeCheck(arr, left+1, right-1); //trim off the 2 ends and continue on to check by calling itself
    }
}
