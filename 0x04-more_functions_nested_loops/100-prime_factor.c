#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143, i, j;

	for (i = 2; i <= num; i++)
	{

		while (num % i == 0)
		{
			j = i;

			num = num / j;

			if (num == 1)
			{
				printf("%lu \n", j);

			}
			j++;
		}
	}
	return (0);

}
