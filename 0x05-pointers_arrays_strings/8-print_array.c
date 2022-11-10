#include "main.h"

/**
 * print_array - prints out an array of numbers seperated by commas
 *
 * @a: array pointer variable
 *
 * @n: number of array elements to be printed out
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);

		}
		else if (i == (n - 1))
		{
			printf("%d", a[i]);

		}
	}
	printf("\n");

}
