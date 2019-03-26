#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: pointer to the given listint.
 * @index: index of the position to delete the node.
 * Return: 1 or -1 if fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *before = *head;
	unsigned int element = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (element != index)
	{
		element++;
		if (current->next == NULL)
			return (-1);
		if (element > 1)
			before = before->next;
		current = current->next;
	}
	before->next = current->next;
	free(current);
	return (1);
}
