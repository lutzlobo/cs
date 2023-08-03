/*
Mission: You're an archaeologist who has just discovered an ancient artifact with a unique set of symbols. It's an array of strange numbers: {2, 5, 1, 8, 2, 9, 9, 3, 2, 6}. The ancient manuscript that comes with the artifact mentions these numbers were used to open a secret chamber. But to do so, you need to find the highest frequency number in the array and how many times it appears.

Your task is to write a program that will:

(1) Take an array of integers.
(2) Identify the number that appears most frequently in the array.
(3) Print that number and the number of times it appears.

Can you crack the code, unlock the secret chamber and discover the treasure hidden by an ancient civilization?

*/

#include<stdio.h>

#define SIZE 10 

int main() {

    int numbers[SIZE] = {2, 5, 1, 8, 2, 9, 9, 3, 2, 6};
    int unique_numbers[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ;
    int count[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ;
    int unique_count = 0;

    int max_count = 0;
    int mode = -1;

    for (int i = 0; i < SIZE; i++) {
        
        int current_number = numbers[i];
        int found = 0; //

        for (int j = 0; j < unique_count; j++) {
            if(unique_numbers[j] == current_number) {
                count[j]++;
                found = 1;
                break;
            }
        }

        if(found == 0) {
            unique_numbers[unique_count] = current_number;
            count[unique_count] = 1;
            unique_count++;
        }
    }

    for (int i = 0; i < unique_count; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            mode = unique_numbers[i];
        }
    }

    printf("The number %d appears %d times, more than any other number.\n", mode, max_count);

    return 0;
}