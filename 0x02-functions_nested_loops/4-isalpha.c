#include "main.h"

/**
 * _isalpha - Checks if character is an alphabet
 *
 * @c: only argument passed
 *
 * Return: 1 || 0 for feedback
 */
int _isalpha(int c)
{
	int v = isalpha(c);

	if (v == 0)
	{
		return (0);

	}
	else
	{
		return (1);

	}
}
