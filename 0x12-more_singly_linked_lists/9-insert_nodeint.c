#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to the given listint.
 * @idx: index of the position to insert the node.
 * @n: data to add in the new node.
 * Return: pointer to the new node, or NULL if it doesn't exist or fail.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new, *before = *head;
	unsigned int element = 0;

	if (head == NULL)
		return (NULL);
	while (element != idx)
	{
		element++;
		if (current->next == NULL)
			return (NULL);
		if (element > 1)
			before = before->next;
		current = current->next;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = current;
	before->next = new;
	return (new);
}
