#include "main.h"

/**
 * print_sign - Checks for character input polarity
 *
 * @n: only argument passed in
 *
 * Return: 1 || 0 || -1 || 404 for test feedback
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return ((1) && _putchar('+'));

	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);

	}
	else if (n < 0)
	{
		return ((-1) && _putchar('-'));

	}
	else
	{
		return ((404) && _putchar('E'));

	}
}
