#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long num = 612852475143, i;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;

			if (num == 1)
			{
				printf("%lu \n", i);

				break;

			}
		}
	}
	return (0);

}
