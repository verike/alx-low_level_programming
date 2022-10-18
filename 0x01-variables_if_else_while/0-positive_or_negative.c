#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry start
 *
 * Returns: Always 0 (success)
 *
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n == 0)
		printf("is zero");
	else if (n > 0)
		printf("is positive");
	else
		printf("is negative");
	printf("\n");
	return (0);
}
