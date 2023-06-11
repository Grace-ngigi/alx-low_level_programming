#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: pointer to the key being retrieved
 * Return: value retrieved
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keyIndex;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	keyIndex = key_index((unsigned char *)key, ht->size);
	node = ht->array[keiIndex];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		return (node->value);
		node = node->next;
	}
	return (NULL);
}
