#include "main.h"

/**
 * print_line - Draws line with a given dimension
 *
 * @n: dimension passed in as an argument
 */
void print_line(int n)
{
	int i = 1;

	if (i <= n)
	{
		while (i <= n)
		{
			_putchar('_');

			i++;

		}

		_putchar('\n');

	}
	else if (n <= 0)
	{
		_putchar('\n');

	}
}
