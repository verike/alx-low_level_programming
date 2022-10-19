#include "main.h"

/**
 * print_alphabet - Prints out lowercase alphabets.
 */

void print_alphabet(void)
{
        for ( char letters = 'a'; letters <= 'z'; letters++ )
        {
                putchar(letters);
        }
        putchar('\n');
}
