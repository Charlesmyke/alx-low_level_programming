#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: input array
 * @n: input of n elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
