#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: char to check
 *
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
