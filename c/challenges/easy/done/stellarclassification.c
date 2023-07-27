/*
You're an astronomer cataloguing different types of stars. In the course of your observations, you've discovered several stars and classified them according to the Morgan–Keenan (MK) system (O, B, A, F, G, K, M), where 'O' represents the hottest stars and 'M' the coolest ones.

However, your list of observations is in a random order, and for your research paper, you need to present the stars in the order of their classification, from hottest to coolest.

Your task is to write a program that sorts an array of characters representing the star types in the order defined by the MK system.

*/

#include <stdio.h>

#define SIZE 7

int main() {
    char stars[SIZE] = {'G', 'A', 'O', 'M', 'B', 'K', 'F'};
    char MK_system[SIZE] = {'O', 'B', 'A', 'F', 'G', 'K', 'M'};
    
    // Loop to sort stars array
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - i - 1; j++) {
            
            int index_j = 0; //first number to compare
            for(int k = 0; k < SIZE; k++) {
                if(MK_system[k] == stars[j]) {
                    index_j = k;
                    break;
                }
            }
            
            int index_j1 = 0; //second number to compare
            for(int k = 0; k < SIZE; k++) {
                if(MK_system[k] == stars[j+1]) {
                    index_j1 = k;
                    break;
                }
            }
            
            if(index_j > index_j1) { //swap
                char temp = stars[j];
                stars[j] = stars[j+1];
                stars[j+1] = temp;
            }
        }
    }
    
    // Print the sorted stars
    for(int i = 0; i < SIZE; i++) {
        printf("%c ", stars[i]);
    }
    
    return 0;
}

