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

	putchar(r + '0');

	r = _islower('o');

	putchar(r + '0');

	r = _islower('r');

	putchar(r + '0');

	putchar('\n');

	return (0);
}
