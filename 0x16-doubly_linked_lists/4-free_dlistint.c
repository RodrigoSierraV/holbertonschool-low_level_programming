#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	head = head->next;
	free(head->prev);
	free_dlistint(head);
}
