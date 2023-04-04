#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linkedlist
 * @h: pointer to list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
