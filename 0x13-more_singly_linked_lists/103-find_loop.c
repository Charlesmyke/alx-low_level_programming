#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: pointer to list beginning
 *
 * Return: address of node where loop starts/NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dog, *bird;

	dog = bird = head;
	while (dog && bird && bird->next)
	{
		dog = dog->next;
		bird = bird->next->next;
		if (dog == bird)
		{
			dog = head;
			break;
		}
	}
	if (!dog || !bird || !bird->next)
		return (NULL);
	while (dog != bird)
	{
		dog = dog->next;
		bird = bird->next;
	}
	return (bird);
}
