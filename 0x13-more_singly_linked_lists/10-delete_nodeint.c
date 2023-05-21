#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to head
 * @index: given index to delete at
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		current = NULL;
		free(current);
		return (1);
	}
	else
	{
		while (i < index - 1 && current != NULL)
		{
			previous = current;
			current = current->next;
			i++;
		}
		previous->next = current->next;
		current = NULL;
		free(current);
		return (1);
	}
}
