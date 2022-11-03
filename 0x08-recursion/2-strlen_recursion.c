#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: string
 *
 * Return: length int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
