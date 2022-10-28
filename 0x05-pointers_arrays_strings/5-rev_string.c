#include "main.h"

/**
 * rev_string - Reverses any string passed in
 *
 * @s: String argument passed into the function
 */
void rev_string(char *s)
{
	int i;

	char *str[] = s;

	while (str[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);

	}
}
