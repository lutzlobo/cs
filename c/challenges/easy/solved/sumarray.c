/*
Sum of Elements in Array: 
Write a function sum_array(int arr[], int n) that takes an array and its size as input, and returns the sum of its elements. 
Call this function in your main() function to find the sum of a given array.
*/

#include <stdio.h>
#define SIZE 5

int sum_array(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return (sum);
}

int main() {
    int array[SIZE] = {10, 10, 10, 10, 10};
    printf("Array size: %d | Array sum: %d\n", SIZE, sum_array(array, SIZE));
    return 0;
}