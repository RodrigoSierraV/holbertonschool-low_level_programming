#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at the idx position of a list.
 * @h: pointer to the head of the list
 * @n: number to insert in the list.
 * @idx: position to add the new node.
 * Return: pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *new = *h, *before;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
		add_dnodeint(h, n);
	while (aux && i != idx)
	{
		aux = aux->next;
		i++;
	}
	if (idx == i)
		add_dnodeint_end(h, n);		
	if (aux == NULL)
		return (NULL);
	new->next = aux;
	new->prev = aux->prev;
	before = aux->prev;
	before->next = new;
	aux->prev = new;
	return (new);
}
