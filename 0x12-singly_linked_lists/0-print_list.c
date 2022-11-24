#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * prints_list - checks code for holberton studs
 * @h: name of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
