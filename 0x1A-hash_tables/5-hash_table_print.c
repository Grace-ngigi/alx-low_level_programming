#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints the values of a hash table
 * @ht: poiner to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *trvs;
	unsigned long int i;
	unsigned char comma = 0;

	if (!ht)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");
			trvs = ht->array[i];
			while (trvs != NULL)
			{
				printf("'%s' : '%s'", trvs->key, trvs->value);
				trvs = trvs->next;
				if (trvs != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
