#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *_zero;

	while (head != NULL)
	{
		_zero = head;
		head = head->next;
		free(_zero);
	}
}
