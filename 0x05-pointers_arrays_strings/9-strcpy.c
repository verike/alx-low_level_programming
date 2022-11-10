#include "main.h"

/**
 * _strcpy - copies string of char into a pointer
 *
 * @dest: pointer for storing new string copied
 *
 * @src: source where the string of char will be copied from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	dest = strcpy(dest, src);

	return (dest);

}
