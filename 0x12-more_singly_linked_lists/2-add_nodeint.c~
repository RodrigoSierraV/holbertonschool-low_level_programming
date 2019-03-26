#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pointer to the given listint.
 * Return: an int with the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	int elements = 0;

	if (h == NULL)
		return (0);
	while (current)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}
