/*
You're a security officer at an intergalactic bank which communicates via encoded messages. The messages are sent as arrays of integers, where each number represents a character code. You've observed that real bank messages always sum to an even number. However, you've just intercepted a suspicious message that doesn't follow this pattern.

Your task is to write a program that identifies and returns the rogue integer in the message which is making the total sum odd. If the sum is even or there's no rogue integer, return -1. 

Hint: Remember that the sum of two odd numbers or two even numbers is always even. The sum of an odd number and an even number is always odd.

Objectives
(1) Sum all numbers in array.
(2) If sum is even, do nothing. If sum is odd start loop to find a even number to subtract.
(3) Subtract that number from sum, and print the correct message.

*/

#include <stdio.h>

#define SIZE 7

int main() {
    int message[SIZE] = {2, 4, 4, 10, 2, 7, 6};  // this array should be replaced with the actual intercepted message
    int i = 0;

    for (i = 0; i < SIZE; i++) {
        if (message[i] % 2 == 0) {
            printf("Found an even element: %d\n", message[i]);
        }
    }

    return 0;
}
