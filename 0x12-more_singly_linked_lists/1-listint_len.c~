#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the given listint.
 * Return: an int with the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (current)
	{
		printf("%d\n", current->n);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
