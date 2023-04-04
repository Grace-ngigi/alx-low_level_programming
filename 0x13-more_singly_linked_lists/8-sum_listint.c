#include "lists.h"

/**
 * sum_listint - retruns the sum of all the data of a linked list
 * @head: pointer to the list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
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
