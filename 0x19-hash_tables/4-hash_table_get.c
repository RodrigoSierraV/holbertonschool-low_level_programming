#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int keynumber = 0; 
	hash_node_t *aux = NULL;

	if (!ht || !key)
		return (NULL);
	keynumber = key_index((unsigned char *)key, ht->size);
	aux = ht->array[keynumber];
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
