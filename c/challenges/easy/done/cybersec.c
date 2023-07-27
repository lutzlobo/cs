/*
You're a cybersecurity analyst. Your job is to check network logs for suspicious activity. Each entry in the network log is represented by a unique integer. However, you are particularly interested in one type of activity, which is represented by a specific number.

Your task is to write a program that checks if a certain number (representing a specific type of activity) is present in an array of integers (representing network logs).

*/

#include <stdio.h>

#define SIZE 7

int main() {
    int network_logs[SIZE] = {1, 5, 3, 7, 9, 2, 6};
    int suspicious_activity = 7; // The activity you're looking for
    int flag = 0;

    for (int i = 0; i < SIZE; i++) {
        if(network_logs[i] == suspicious_activity) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) {
        printf("Hacker found!\n");
    }
    else {
        printf("You're safe\n");
    }
}