#include "main.h"

/**
 * _isdigit - checks if char entered is a digit
 *
 * @c: Argument passed intothe function
 *
 * Return: 1 if char is a number and 0 if char is not
 */
int _isdigit(int c)
{
	int r;

	r = isdigit(c);

	if (r != 0)
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
