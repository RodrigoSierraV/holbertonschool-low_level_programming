#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index of a list.
 * @head: pointer to the head of the list
 * @index: position to add the new node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *next, *before;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (aux->next == NULL)
		{
			*head = NULL;
			free(aux);
			return (1);
		}
		*head = aux->next;
		free(aux);
		(*head)->prev = NULL;
		return (1);
	}
	while (aux && i != index)
	{
		aux = aux->next;
		i++;
	}
	if (aux == NULL)
		return (-1);
	before = aux->prev;
	if (aux->next == NULL)
	{
		before->next = NULL;
		free(aux);
		return (1);
	}
	next = aux->next;
	before->next = next;
	next->prev = before;
	free(aux);
	return (1);
}
