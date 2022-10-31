#include "main.h"

/**
 * _memset - Prints function that fills memory with a constant byte
 * @n: byte of memory pointed to by @s
 * @s: constant byte @b
 * @b: memory area pointer
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
