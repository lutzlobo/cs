/*
Reverse a String: 
Write a function void reverse_string(char str[]) that takes a string as input, and reverses the string without returning any value. 
Use this function in your main() function to reverse a given string.
*/

#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int lenght = strlen(str);
    for (int i = 0; i < lenght / 2; i++) {
        char temp = str[i];
        str[i] = str[lenght - i - 1];
        str[lenght - i - 1] = temp;
    }
}

int main (void) {
    char text[] = "Hacker";
    reverse_string(text); // Why I need to call here and not inside printf?
    printf("%s\n", text);
    return 0;
}