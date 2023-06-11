#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	newTable->size = size;
	newTable->array = malloc(sizeof(hash_table_t) * size);
	if (newTable->array == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		;
	newTable->array[i] = NULL;
	return (newTable);
}
