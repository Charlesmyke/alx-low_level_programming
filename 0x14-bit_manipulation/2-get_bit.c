#include "main.h"

/**
 * get_bit - fxn that gets the value of a bit
 * @n: bit char
 * @index: index to obtain value
 *
 * Return: -1 if error, or the value of bit index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
