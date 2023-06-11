#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: pointer to the key of the value to be added
 * @value: pointer to the value to be added
 * Return: 1 if success 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElement;
	unsigned long int keyIndex, i;

	if (!ht || !*key || !key || !value)
		return (0);
	/* determine index of the provided key */
	keyIndex = key_index((unsigned char *)key, ht->size);
	for (i = keyIndex; ht->array[i]; i++)
	{
		/* Check existance */
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	newElement = malloc(sizeof(hash_node_t));
	if (newElement == NULL)
		return (0);
	newElement->key = strdup(key);
	newElement->value = strdup(value);
	newElement->next = ht->array[keyIndex];
	ht->array[keyIndex] = newElement;
	return (1);
}
