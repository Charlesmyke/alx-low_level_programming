#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The pointer being converted
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int si = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			si = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (si == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}
