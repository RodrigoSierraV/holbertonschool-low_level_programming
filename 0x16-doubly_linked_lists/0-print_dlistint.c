#include "lists.h"

/**
 * size_t print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *aux = (dlistint_t *)h;

	if (h == NULL)
		return (i);
	while (aux)
	{
		printf("%d\n", aux->n);
		i++;
		aux = aux->next;
	}
	return (i);
}
