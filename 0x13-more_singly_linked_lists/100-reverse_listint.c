#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (!head || !*head)
		return (NULL);

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	 *head = prev;
	return (*head);
}
