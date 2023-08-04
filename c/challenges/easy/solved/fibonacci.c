/*
Fibonacci Series: 
Write a function void fibonacci(int n) that prints the first n terms of the Fibonacci series. 
The Fibonacci series is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. 
For example, the first 6 terms of the Fibonacci series are: 0, 1, 1, 2, 3, 5.
*/

#include <stdio.h>

int fibonacci(int n) {

    int first = 0;
    int second = 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        int temp = first + second;
        first = second;
        second = temp;
    }

    return first;
}

int main(void) {
    int n = 6;
    printf("%d", fibonacci(n - 1)); 
    return 0;
}   