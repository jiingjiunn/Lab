/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex1
 * palindrome_numbers.c
 * <Type in description of program>
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>

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

int isPalindrome(int n){
    int arr[15];
    int i = 0, size = 0;
    while(n > 0){
        arr[i] = n % 10;
        n = n/10;
        i++;
    }
    size = i-1;

    palindromeCheck(arr, size);
    /*
    for(i = 0; i <= size/2; i++){
        if(arr[i] != arr[size-i]){
            return 0;
        }
    }
    for(i = 0; i <= size; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 1;*/
}

int palindromeCheck(int arr[15], int size){
    if(arr[0] != arr[size]){
        return 0;
    }else if(size <= 1){
        return 1;
    }else{
        return palindromeCheck(arr+1, size-2);
    }
}
