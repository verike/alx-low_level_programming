#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int r;
	
	r = _islower('H');

	_putchar(r + '0');

	r = _islower('o');

	_putchar(r + '0');

	r = _islower('r');

	_putchar(r + '0');

	_putchar('\n');

	return (0);
}
