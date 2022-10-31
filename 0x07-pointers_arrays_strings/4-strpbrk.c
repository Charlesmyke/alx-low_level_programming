#include "main.h"

/**
 * _strpbrk - function that searches for string for any set of bytes
 * @s: locates first occurrence in string
 * @accept: matches one of the bytes, or @NULL
 *
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return (NULL);
}
