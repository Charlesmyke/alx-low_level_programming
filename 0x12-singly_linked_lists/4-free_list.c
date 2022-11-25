#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - releases the memory allocated
 * @head: pointer to first node of list
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
