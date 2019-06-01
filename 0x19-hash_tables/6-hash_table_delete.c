#include "hash_tables.h"

/**
 * free_list - frees a list.
 * @head: given linked list
 * Return: nothing.
 */
void free_list(hash_node_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->key);
	free(head->value);
	free(head);
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete.
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	while (pos < ht->size)
	{
		if (ht->array[pos])
		{
			aux = ht->array[pos];
			free_list(aux);
		}
		pos++;
	}
	free(ht->array);
	free(ht);
}
