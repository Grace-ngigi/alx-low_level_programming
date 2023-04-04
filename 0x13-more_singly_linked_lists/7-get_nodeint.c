#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the list
 * @index: the index of the node starting at 0
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nthnode;

	if (head == NULL)
		return(NULL);

	nthnode = head;
	for (i = 0; i < index; i++)
		nthnode = nthnode->next;
	return (nthnode);
}
