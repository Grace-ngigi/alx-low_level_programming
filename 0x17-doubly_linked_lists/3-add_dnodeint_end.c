#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to the head
 * @n: int containing data
 * Return: pointer to the new node creted
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tempnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		tempnode = *head;
		while (tempnode->next != NULL)
			tempnode = tempnode->next;
		tempnode->next = newnode;
		newnode->prev = tempnode;
	}
	return (newnode);
}
