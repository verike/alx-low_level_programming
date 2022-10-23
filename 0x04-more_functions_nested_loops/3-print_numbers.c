#include "main.h"

/**
 * print_numbers - Prints out numbers from 0 - 9
 *
 * Return: result
 */
void print_numbers(void)
{
	char result = '0';

	while (result <= '9')
	{
		_putchar(result);

		result++;

	}
	_putchar('\n');

}
