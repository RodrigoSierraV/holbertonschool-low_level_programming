#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to print.
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos = 0, print = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	printf("{");
	while (pos < ht->size - 1)
	{
		if (ht->array[pos])
		{
			print = 0;
			aux = ht->array[pos];
			while (aux)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				if (aux)
					printf(",");
				print = 1;
			}
		}
		pos++;
		if (ht->array[pos] && print == 1)
			printf(",");
	}
	printf("}\n");
}
