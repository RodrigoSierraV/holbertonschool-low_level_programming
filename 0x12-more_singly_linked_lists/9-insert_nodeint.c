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
	listint_t *current, *new, *before;
	unsigned int element = 0;

	if (!head)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (idx == 0)
		return (add_nodeint(head, n));
	current = *head;
	before = *head;
	while (element != idx)
	{
		element++;
		if (current->next == NULL)
		{
			free(new);
			return (NULL);
		}
		if (element > 1)
			before = before->next;
		current = current->next;
	}
	new->next = current;
	before->next = new;
	return (new);
}
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the given listint.
 * @n: number to add in the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
