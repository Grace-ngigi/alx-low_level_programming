#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double poiner to the head of the list
 * @idx: given index
 * @n: data to be inserted
 * Return: pointer to the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *trvs;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = newnode;
		newnode->next = *h;
		*h = newnode;
	}
	else
	{
		trvs = *h;
		while (i < idx - 1 && trvs != NULL)
		{
			trvs = trvs->next;
			i++;
		}
	newnode->next = trvs->next;
	if (trvs->next != NULL)
		trvs->next->prev = newnode;
	newnode->prev = trvs;
	trvs->next = newnode;
	}
	return (newnode);
}

