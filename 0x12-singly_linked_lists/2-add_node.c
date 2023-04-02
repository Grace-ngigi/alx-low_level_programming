#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new value at the beginning of a list
 * @head: double pointer to the list
 * @str: new string to add in the node
 * Return: the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int i;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
	return (NULL);

	new_list->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	continue;

	new_list->len = i;
	new_list->next = *head;
	*head = new_list;
	return (*head);
}
