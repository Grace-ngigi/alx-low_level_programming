#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head of the list
 * Return: number of elements in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *nextnode = head;
	const listint_t *doubleNextnode = head;

	while (doubleNextnode != NULL && doubleNextnode->next != NULL)
	{
		printf("[%p] %d\n", (void *)nextnode, nextnode->n);
		nextnode = nextnode->next;
		doubleNextnode = doubleNextnode->next->next;

		if (nextnode == doubleNextnode)
		{
			printf("[%p] %d\n", (void *)nextnode, nextnode->n);
			printf("-> [%p] %d\n", (void *)nextnode->next, nextnode->next->n);
			break; /* Cycle detected, exit loop */
		}
		i++;
	}
	if (doubleNextnode == NULL || doubleNextnode->next == NULL)
	{
		while (nextnode != NULL)
		{
			printf("[%p] %d\n", (void *)nextnode, nextnode->n);
			nextnode = nextnode->next;
			i++;
		}
	}
	return (i);
}
