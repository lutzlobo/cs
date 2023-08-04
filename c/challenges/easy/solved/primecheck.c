/*
Prime Checker: 
Write a function int is_prime(int n) that takes an integer as input and returns 1 if the number is prime and 0 otherwise. 
A number is considered prime if it's greater than 1 and has no divisors other than 1 and itself.
*/

#include <stdio.h>

int is_prime(int n) {
    
    if (n <= 1) { //not prime
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;

}

int main (void) {
    printf("%d", is_prime(7));
}