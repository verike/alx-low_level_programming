#include "main.h"

/**
 * print_alphabet - Prints out lowercase alphabets.
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);

		letters++;
        }
        putchar('\n');

}
