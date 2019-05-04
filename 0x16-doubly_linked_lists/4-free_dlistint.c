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
	head = head->next;
	free(head->prev);
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_dlistint(head);
}
