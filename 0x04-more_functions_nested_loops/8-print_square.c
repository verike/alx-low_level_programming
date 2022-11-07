#include "main.h"

/**
 * print_square - Draws a perfect square using '#' Symbol
 *
 * @size: argument passed for dimension
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		a = 1;

		while (a <= size)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');

			}
			_putchar('\n');

			a++;

		}

	}
	else
	{
		_putchar('\n');

	}
}
