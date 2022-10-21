#include "main.h"

/**
 * _isupper - returns 1 if value is upper case and 0 if else
 *
 * @c: charater passed in as an argument
 *
 * Return: 1 if uppercase and 0 if char is lowercase
 */
int _isupper(int c)
{
	int r;

	r = isupper(c);

	if (r != 0)
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
