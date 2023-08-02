/* 
You're an astronaut aboard a space station orbiting Earth. Your food supplies come in packages delivered from Earth, and each package contains different types of food items. However, you only like certain types of food, and you want to find out if your favorite food item is in the package.

Your task is to write a program that checks if a certain number is present in an array of integers representing the types of food items.

*/

#include <stdio.h>

#define SIZE 7

int main() {
    int food[SIZE] = {1, 5, 3, 7, 9, 2, 6};
    int favorite = 7; // Your favorite food item
    int i = 0;
    int found = 0; // flag

    for (i = 0; i < SIZE; i++) {
        if(food[i] == favorite) {
            found = 1;
            break;
        }
    } 

    if (found == 1) {
        printf("Favorite food found in the package!\n");
    }
    else {
        printf("No favorite food found in the package.\n");
    }
    
    return 0;
}
