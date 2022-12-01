#include "main.h"

/**
 * clear_bit - sets value of bit at given index
 * @n: pointer to bit
 * @index: index value
 *
 * Return: -1 if error occurs, otherwise 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
