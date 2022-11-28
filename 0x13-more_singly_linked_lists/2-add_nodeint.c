#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at list beginning
 * @head: head of double pointer
 * @n: number of added list
 *
 * Return: NULL, if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
