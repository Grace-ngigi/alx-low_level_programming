#include "lists.h"

/**
 * sum_dlistint - return the sum of linked list items
 * @head: pointer to hte head of the linked list
 * Return: sum, otherwise null
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
