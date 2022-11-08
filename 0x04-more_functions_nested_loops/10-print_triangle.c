#include "main.h"

/**
 * print_triangle - Draws a triangle
 *
 * @size: Argument passed into the function as dimension
 */
void print_triangle(int size)
{
	int a = 1, b, c;

	if (size > 0)
	{
		while (a <= size)
		{
			b = size - a;
			
			while (b > 0)
			{
				_putchar(' ');

				b--;

			}
			c = a;

			while (c > 0)
			{
				_putchar('#');

				c--;

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
