/*
You're an adventurer in a magical forest where trees bear fruits, some of which are venomous. The venomous fruits are known to be smaller in size than the non-venomous ones. However, some venomous fruits are even smaller and more dangerous than others.

Your task is to write a program that finds the smallest number in an array of integers representing the sizes of fruits you've encountered. The smallest number represents the most venomous fruit.

*/

#include <stdio.h>

#define SIZE 5

int main() {
    int fruits[SIZE] = {10, 20, 3, 40, 5}; // The sizes of fruits you've encountered.
    int smallest = fruits[0];

    for (int i = 1; i < SIZE; i++) {
        if(fruits[i] < smallest) {
            smallest = fruits[i];
        }
    }

    printf("The most venomous fruit is: %d", smallest);
    
    return 0;
}
