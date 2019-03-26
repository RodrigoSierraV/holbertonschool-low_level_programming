#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: given linked list
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *deleted;

	if (head == NULL)
		return;
	while (*head)
	{
		deleted = *head;
		*head = (*head)->next;
		free(deleted);
	}
	*head = NULL;
}
