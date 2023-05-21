#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free the list
 * @head: pointer to th head of the link
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
