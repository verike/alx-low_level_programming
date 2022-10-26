#include "main.h"

/**
 * _puts - Prints our any string passed into it
 *
 * @str: Char pointer argument passed into the function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);

	}
	_putchar('\n');

}
