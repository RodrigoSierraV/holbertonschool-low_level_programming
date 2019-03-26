#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the given listint.
 * @n: number to add in the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *deleted = *head;

	if (*head == NULL)
		return (0);
	current = current->next;
	*head = current;
	free(deleted);
	return (current->n);
}
