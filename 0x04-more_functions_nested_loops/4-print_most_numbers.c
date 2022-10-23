#include "main.h"

/**
 * print_most_numbers - Function that prints numbers from 0-9 except 2 & 4
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num == '2' || num == '4')
		{
			num++;

		}
		else
		{
			_putchar(num);

		}

		num++;

	}
	_putchar('\n');

}
