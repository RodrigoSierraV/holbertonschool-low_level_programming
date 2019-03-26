#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the given listint.
 * @index: index of the requested element.
 * Return: pointer to the requested node, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int element = 0;

	if (head == NULL)
		return (NULL);
	while (element != index)
	{
		element++;
		current = current->next;
	}
	return (current);
}
