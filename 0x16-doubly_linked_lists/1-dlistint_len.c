#include "lists.h"

/**
 * dlistint_len - finds the length dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *aux = (dlistint_t *)h;

	if (h == NULL)
		return (i);
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
