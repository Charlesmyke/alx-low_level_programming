#include "main.h"

/**
 * _isdigit - Checks for digit 0 through 9
 * @c: is the character to be checked
 *
 * Return: 1-if digits from 0 - 9, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
