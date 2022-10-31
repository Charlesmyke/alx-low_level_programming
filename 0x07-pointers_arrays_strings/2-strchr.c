#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: first occurrence of the character
 * @s: located in the string
 *
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
