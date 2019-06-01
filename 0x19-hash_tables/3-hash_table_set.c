#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int keynumber;
	hash_node_t *new;

	if (!ht || !ht->array || !key || strlen(key) == 0 || !value ||
		ht->size == 0)
		return (0);
	keynumber = key_index((unsigned char *)key, ht->size);
	if (!(new = (hash_node_t *)malloc(sizeof(hash_node_t))))
		return (0);
	if (!(new->value = strdup(value)))
		return (0);
	if (!(new->key = strdup(key)))
		return (0);
	new->next = NULL;
	if (!ht->array[keynumber])
		ht->array[keynumber] = new;
	else
	{
		new->next = ht->array[keynumber]->next;
		ht->array[keynumber] = new;
	}
	return (1);
}
