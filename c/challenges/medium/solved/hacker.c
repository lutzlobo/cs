/*
Your mission is to identify the missing response to maintain your cover. Your program should take an array of integers (representing the responses sent by the legitimate system) and return the missing integer.

Here's an example scenario:

The array is: 3, 7, 11, 15, 19, 27, 31, 35
*/

#include <stdio.h>

#define SIZE 8

int main() {
    int responses[SIZE] = {3, 7, 11, 15, 19, 27, 31, 35};
    int i = 0;
    int missing = 0;

    for (i = 0; i < SIZE; i++) {
        if (responses[i+1] == (responses[i]) + 4) {
            missing = 0;
        }
        else {
            missing = responses[i] + 4;
            break;
        }
    }

    printf("The missing response is: %d ", missing);

    return 0;
}