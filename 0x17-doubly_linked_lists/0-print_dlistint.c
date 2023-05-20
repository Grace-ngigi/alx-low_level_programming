#include "lists.h"
/**
 * print_dlistint - pritns the elements of a double linked list
 * @h: pointer
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return(i);
}
