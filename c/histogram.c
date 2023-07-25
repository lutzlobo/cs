#include<stdio.h>

/* Define constants that will be used throughout the program.
IN and OUT are used as status flags to indicate if we're currently inside or outside of a word.
MAXLENGTH is used to define the maximum length of words the program will consider. */
#define IN        1
#define OUT       0
#define MAXLENGTH 11

int main()
{
  /* Initialize variables.
  i, j are used as index counters.
  c will hold the ASCII value of the current character being read.
  nchar is used to count the number of characters in a word.
  inspace is a flag to indicate if we are inside or outside of a word.
  wordlen is an array that will hold the count of words of each length. */
  int i = 0;
  int j = 0;  
  int c = 0;
  int nchar = 0;
  int inspace = IN;
  int wordlen[MAXLENGTH]; 

  /* Initialize all elements in wordlen to 0 */
  for(i = 0; i < MAXLENGTH; ++i)
    wordlen[i] = 0;

  /* Start reading characters from the input until End Of File (EOF) is encountered */
  while((c = getchar()) != EOF)
    {
      /* If the current character is a space, tab, or newline, we're outside a word */
      if(c == ' ' || c == '\t' || c == '\n')
	{
	  /* If we've just exited a word, and the length of the word is less than the maximum length,
	  increment the count for words of that length. */
	  if (inspace == OUT)
	    {
	      if(nchar < MAXLENGTH)
		++wordlen[nchar];
	    }
	  
	  /* Set flag to indicate we're inside a space (not in a word) and reset character count */
	  inspace = IN;
	  nchar = 0;
	}
      else
	{
	  /* If the current character is not a space, tab, or newline, we're inside a word.
	  Increment the character count, unless the character is a quote, in which case decrement it.
	  Set the flag to indicate we're outside a space (inside a word). */
	  ++nchar;
	  if(c == '"' || c == '\'')
	    --nchar;
	  inspace = OUT;
	}
    }

  /* Print the histogram.
  For each possible word length from 1 to MAXLENGTH - 1, print a line containing the length followed by a bar of asterisks.
  The number of asterisks equals the number of words of that length encountered in the input. */
  for(i = 1; i < MAXLENGTH; ++i)
    {
      printf("%2d| ", i);
      for(j = 0; j < wordlen[i]; ++j)
	        putchar('*');

      putchar('\n');
    }

  /* Return 0 to indicate that the program has finished successfully */
  return 0;
}
