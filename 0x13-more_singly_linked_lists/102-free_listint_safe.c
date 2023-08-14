#include "lists.h"
/**
 * free_listint_safe - frees both cyclic and acyclic linked lists
 * @h: pointer to the head of the list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *slow, *fast;
	unsigned int i = 0;

	slow = fast = *h;
	if (h == NULL || *h == NULL)
		return (0);
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = *h; /* reset slow to head */
			while (slow != fast)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				i++;
			}
			while (fast->next != slow)
			{
				temp = fast;
				fast = fast->next;
				free(temp);
				i++;
			}
			free(slow); /* where cycle starts */
			i++;
			*h = NULL;
			return (i);
		}
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		i++;
	}
	*h = NULL;
	return (i);
}
