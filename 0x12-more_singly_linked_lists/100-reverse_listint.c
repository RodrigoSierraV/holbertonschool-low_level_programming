#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint -  reverses a linked listint_t list.
 * @head: pointer to the given listint.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *tmp = NULL;

	if (head == NULL)
		return (*head);
	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	*head = prev;
	return (*head);
}
