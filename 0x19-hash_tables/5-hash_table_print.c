#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to print.
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	printf("{");
	while (pos < ht->size)
	{
		if (ht->array[pos])
		{
			aux = ht->array[pos];
			while (aux)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
			}
			printf(",");
		}
		pos++;
	}
	printf("}\n");
}
