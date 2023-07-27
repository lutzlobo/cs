#include <stdio.h>

#define SIZE 8

int main() {
    int j = 0;
    int i = 0;
    int bubble[8] = {7, 3, 1, 4, 2, 8, 5, 6};

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE - i - 1; j++) {
            if (bubble[j] > bubble[j + 1]) {
                int temp = bubble[j];
                bubble[j] = bubble[j + 1];
                bubble[j + 1] = temp;
            }

        }
    }

    for (i = 0; i < SIZE; i++) {
        printf("%d ", bubble[i]);
    }
}