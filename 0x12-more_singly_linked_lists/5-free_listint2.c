#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: given linked list
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
  listint_t *current = *head, *deleted;

	if (*head == NULL)
		return;
	while (current)
	{
		deleted = *head;
		current = current->next;
		*head = current;
		free(deleted);
	}
	*head = NULL;
}
