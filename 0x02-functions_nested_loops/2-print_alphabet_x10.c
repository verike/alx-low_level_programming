#include "main.h"

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char letters = 'a';

		while (letters <= 'z')
		{
			putchar(letters);

			letters++;

		}
		putchar('\n');

		count++;

	}
}
