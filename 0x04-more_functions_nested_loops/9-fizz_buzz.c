#include "main.h"

void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 15) == 0)
		{
			printf("%i FizzBuzz\n", num);

		}
		else if ((num % 3) == 0)
		{
			printf("%i Fizz\n", num);

		}
		else if ((num % 5) == 0)
		{
			printf("%i Buzz\n", num);

		}
		else
		{
			printf("%i \n", num);

		}
	}
}
