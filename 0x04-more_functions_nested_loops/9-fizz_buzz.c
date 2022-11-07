#include "main.h"

/**
 * fizz_buzz - Prints numbers from 1 - 100
 */
void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
		{
			printf("Buzz");
		}
		else if ((num % 15) == 0)
		{
			printf("FizzBuzz ");

		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");

		}
		else if ((num % 5) == 0)
		{
			printf("Buzz ");

		}
		else
		{
			printf("%i ", num);

		}
	}
	printf("\n");

}
