#include "lists.h"
/**
 * list_len - returns the number of elements i na list
 * @h: pointer to struct list_t
 * Return: number of elements in struct list_t
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
