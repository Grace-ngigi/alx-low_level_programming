#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: double pointer to the lst
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *delnode;
	int someInt;

	if (head == NULL || *head == NULL)
		return (0);

	delnode = *head;

	someInt = delnode->n;
	*head = delnode->next;
	free(delnode);
	return (someInt);
}
