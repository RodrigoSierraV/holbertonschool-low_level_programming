#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to search
 * Return: pointer to value of key or NULL.
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
