#include "lists.h"

/**
 * sum_listint - sum of all data of linked list
 * @head: pointer of first node
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
