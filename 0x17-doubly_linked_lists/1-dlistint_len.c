#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: pointer
 * Return: the number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
