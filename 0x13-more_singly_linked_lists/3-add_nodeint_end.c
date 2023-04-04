#include "lists.h"
/**
 * add_nodeint_end - adds a node at then end of the list
 * @head: double pointer to list
 * @n: value stored in the node
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *endnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	endnode = *head;
	while (endnode->next != NULL)
		endnode = endnode->next;
	endnode->next = newnode;
	return (endnode);
}
