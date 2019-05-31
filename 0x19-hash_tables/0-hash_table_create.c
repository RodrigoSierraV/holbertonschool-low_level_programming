#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array if the table.
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i = 0;

	hash = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(size * sizeof(hash_node_t *));
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
