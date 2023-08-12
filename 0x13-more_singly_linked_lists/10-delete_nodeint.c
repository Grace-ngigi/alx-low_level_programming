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
	unsigned int i = 0;
	listint_t *temp, *current;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		return (1);
	}
	current = *head;
	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	temp = current->next;
	if (temp == NULL)
		return (-1);
	current->next = temp->next;
	free(temp);
	temp = NULL;
	return (1);
}
