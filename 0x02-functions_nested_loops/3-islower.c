#include "main.h"

/**
 * _islower - checks if the return value is 1 or 0
 *
 * @c: only argument passed
 *
 * Return: 1 || 0 for output
 */
int _islower(int c)
{
	int v = islower(c);

	if (v == 0)
	{
		return (0);

	}
	else
	{
		return (1);

	}
}
