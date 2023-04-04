#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	free(head);
}
