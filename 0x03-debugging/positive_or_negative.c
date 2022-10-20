#include "main.h"

/**
 * positive_or_negative - Checks the polarity of the argument
 *
 * @i: Test argument
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero", i);

	}
	else if (i > 0)
	{
		printf("%d is positive", i);

	}
	else
	{
		printf("%d is negative", i);
	}
	printf("\n");

}
