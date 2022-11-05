#include "main.h"

/**
 * more_numbers - Prints out 0 - 14, 10 times
 */
void more_numbers(void)
{
	int r = 0;

	for (; r <= 10; r++)
	{

		for (int c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');

		}
		_putchar('\n');

	}
}
