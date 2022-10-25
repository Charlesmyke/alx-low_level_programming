#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src.
 * @dest: char to check
 * @src: source code
 *
 * Return: 0 is success
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
