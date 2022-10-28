#include "main.h"

/**
 * rev_string - Reverses any string passed in
 *
 * @s: String argument passed into the function
 *
 * Return: returns reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
