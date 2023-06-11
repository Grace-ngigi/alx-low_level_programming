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

	keyIndex = key_index((unsigned char *)key, ht->size);
	if (keyIndex)
		return (ht->array[keyIndex]->value);
	else
		return (NULL);
}
