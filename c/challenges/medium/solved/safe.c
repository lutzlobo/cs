/*
Mission: You're an hacker who has just discovered an ancient technological safe with a unique set of symbols. 
It's an array of strange numbers: {4, 3, 2, 5, 3, 2, 1, 7, 8, 9}. 
The txt file that comes with the safe mentions these numbers were used to open the safe. 
But to do so, you need to find the highest frequency number in the array and how many times it appears.

Your task is to write a program that will:

(1) Take an array of integers.
(2) Identify the number that appears most frequently in the array.
(3) Print that number and the number of times it appears.

Can you crack the code, unlock the secret safe and discover the treasure hidden by an ancient futuristic civilization?

*/

#include<stdio.h>

#define SIZE 10 

int main() {

    int numbers[SIZE] = {4, 8, 8, 5, 8, 2, 8, 7, 8, 9}; // array de números
    int unique_numbers[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // array para guardar os números únicos
    int count[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // array para guardar a contagem dos números únicos
    int unique_count = 0; // contagem de quantos números únicos eu tenho (começa no zero)
    int max_count = 0;
    int mode = -1;

    for (int i = 0; i < SIZE; i++) {
        
        int current_number = numbers[i]; // variável para guardar qual número estou
        int found = 0; 

        for (int j = 0; j < unique_count; j++) { 
            if(unique_numbers[j] == current_number) { // verifica se já tenho o número atual na minha array de números únicos
                count[j]++;
                found = 1;
                break;
            }
        }

        if (found == 0) { // aqui eu estou colocando tanto meu número atual no index X do meu unique_numbers, quanto aumentando em 1 o meu unique_count.
            unique_numbers[unique_count] = current_number;
            count[unique_count] = 1;
            unique_count++;
        }

    }

    // Aqui eu terminei de organizar meus arrays. Agora é a hora de contar qual o número que mais aparece.

    for (int i = 0; i < unique_count; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            mode = unique_numbers[i];
        }
    }

    printf("The number %d appears %d times. \n", mode, max_count);
}