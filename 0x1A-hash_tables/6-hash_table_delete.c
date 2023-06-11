#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *trvs;
	hash_table_t *tmp = ht;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			trvs = ht->array[i];
			while (trvs != NULL)
			{
				node = trvs->next;
				free(trvs->key);
				free(trvs->value);
				free(trvs);
				trvs = node;
			}
		}
	}
	free(tmp->array);
	free(tmp);
}
