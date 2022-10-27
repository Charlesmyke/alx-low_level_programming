#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string destination
 * @src: source string
 * @n: length of int
 *
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);

}
