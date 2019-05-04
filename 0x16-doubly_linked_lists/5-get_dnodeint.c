#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: nth position in the list starting from 0.
 * Return: pointer to the nth node or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux = head;

	if (head == NULL)
		return (NULL);
	while (aux && i != index)
	{
		i++;
		aux = aux->next;
	}
	if (aux == NULL)
		return (NULL);
	return (aux);
}
