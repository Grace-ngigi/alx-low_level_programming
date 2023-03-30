#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to struct list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	if (h)
	{
		for (i = 0; h != NULL; i++)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	else
	{
		printf("[0] (nil}");
	}
	return (i);
}
