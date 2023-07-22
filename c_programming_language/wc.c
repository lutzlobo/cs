#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 //Outside a word

//Count lines, words and characters in input

int main() {
    int c, nl, nw, nc, state; //Declare variables

    state = OUT; //State starts 0
    nl = nw = nc = 0; //No. lines, no. words, no. characters start at 0

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        } 
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}