#include <stdio.h>
#define SIZE 7

int temperature(int n);

int main() {
    int templist[SIZE] = {0, 5, 10, 15, 20, 25, 30};
    for (int i = 0; i < SIZE; i++) {
        printf("%d celsius = %d fahr \n", templist[i], temperature(templist[i]));
    }
    return 0;
}

int temperature (int celsius) {
    int f = (celsius * 1.8) + 32;
    return f;

}