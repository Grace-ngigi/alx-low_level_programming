#include "lists.h"

/*
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head, *prev = NULL, *next;

	if (!head || !*head)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	temp = prev;
	return (temp);
}
