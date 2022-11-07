#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: argument given as dimension for line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				j = i;

				while ((j - 1) > 0)
				{

					_putchar(' ');

					j--;

				}
			}
			_putchar('\\');

			_putchar('\n');

		}

	}
	else
	{
		_putchar('\n');

	}
}
