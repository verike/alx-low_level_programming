#include "main.h"

/**
 * print_alphabet() - Prints out lowercase alphabets
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	for ( char letters = 'a'; letters <= 'z'; letters++ )
	{
		putchar(letters);
	}
	putchar('\n');
}
