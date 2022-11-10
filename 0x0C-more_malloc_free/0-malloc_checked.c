#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (1 == NULL)
		exit(98);
	return (i);

}
