// Include the standard input/output library to use its functions
#include <stdio.h>

// Define the main function
int main(void) {

    // Declare and initialize variables
    int c, i, nwhite, nother; // c is for characters read from input, i is for loop control, nwhite for counting whitespace, nother for counting other characters
    int ndigit[10]; // Array to store counts of each digit (0-9)

    // Initialize counters for whitespace and other characters to 0
    nwhite = nother = 0;

    // Initialize counters for each digit to 0
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }
   
    // Read characters from input until reaching EOF (End Of File)
    while ((c = getchar()) != EOF) {
        
        // If character is a digit (between '0' and '9')
        if (c >= '0' && c <= '9') {
            // Increment the counter for this digit. 'c - '0'' converts the digit character to its integer value.
            ++ndigit[c-'0'];
        }
        // If character is a whitespace (space, newline, or tab)
        else if (c == ' ' || c == '\n' || c == '\t') {
            // Increment the counter for whitespace
            ++nwhite;
        }
        // If character is not a digit and not a whitespace
        else {
            // Increment the counter for other characters
            ++nother;
        }
    }
    
    // Print counts: start by printing "digits ="
    printf("digits =");
    
    // Loop through the array and print the count for each digit
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    
    // Print the counts for whitespace and other characters
    printf(", white space = %d, other = %d\n", nwhite, nother);

    // End of main function
    return 0;
}
