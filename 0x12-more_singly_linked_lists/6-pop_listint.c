#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the given listint.
 *
 * Return: the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *deleted = *head;
	int exnum = 0;

	if (*head == NULL)
		return (0);
	exnum = current->n;
	current = current->next;
	*head = current;
	free(deleted);
	return (exnum);
}
