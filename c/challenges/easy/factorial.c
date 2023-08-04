/*
Factorial of a Number:
Write a function int factorial(int n) that calculates the factorial of a number. 
The factorial of a number n is the product of all positive integers less than or equal to n. It's often denoted as n!
For example, the factorial of 5 is 5*4*3*2*1 = 120.
*/

#include <stdio.h>

int factorial(int n) {
    int f = n;
    
    for (int i = n - 1; i > 0; --i) {
        f = f * i;
    }

    return f;
}


int main(void) {
    printf("%d", factorial(5));
    return 0;
}