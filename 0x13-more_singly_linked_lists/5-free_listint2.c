#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: double pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
		head = NULL;
}
