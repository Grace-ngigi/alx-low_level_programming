#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node at given position
 * @head: pointer to the head of the linked list
 * @index: given position
 * Return: Node at given index, otherwise null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trvs;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	trvs = head;
	while (trvs != NULL && i < index)
	{
		trvs = trvs->next;
		i++;
	}
	if (i == index)
		return (trvs);
	return (NULL);
}
