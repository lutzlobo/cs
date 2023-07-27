/*
You're hacker trying to find a vulnerability in the
government system.
*/

#include <stdio.h>

#define SIZE 10

int main() {
    int system[SIZE] = {4, 2, 1, 5, 3, 9, 1, 4, 5, 7};
    int vuln = 9;
    int flag = 0;

    for (int i = 0; i < SIZE; i++) {
        if (system[i] == vuln) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("Vulnerability found!");
    }
    else {
        printf("Nothing here.");
    }
}