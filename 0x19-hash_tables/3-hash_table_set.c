#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key to add
 * @value: value to add
 * Return: 1 or 0 in case of failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int keynumber;
	hash_node_t *new = NULL, *aux = NULL;

	if (!ht || !ht->array || !key || strlen(key) == 0 || !value ||
		ht->size == 0)
		return (0);
	keynumber = key_index((unsigned char *)key, ht->size);
	aux = ht->array[keynumber];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			break;
		aux = aux->next;
	}
	if (aux)
	{	free(aux->value);
		aux->value = strdup(value);
		if (!aux->value)
			return (0);
	}
	else
	{	new = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		new->value = strdup(value);
		if (!new->value)
			return (0);
		new->key = strdup(key);
		if (!new->key)
			return (0);
		new->next = NULL;
		if (!ht->array[keynumber])
			ht->array[keynumber] = new;
		else
		{
			new->next = ht->array[keynumber]->next;
			ht->array[keynumber] = new;
		}
	}
	return (1);
}
