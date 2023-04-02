#include "lists.h"
#include "stdlib.h"
#include <string.h>
/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to the head
 * @str: pointer to the str to be added
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp_node;
	unsigned int i;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		continue;
	new_list->len = i;
	new_list->next = NULL;
	temp_node = *head;

	if (temp_node)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_list;
	}
	else
		*head = new_list;
	return (*head);
}
