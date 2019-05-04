#include "lists.h"

/**
 * sum_dlistint - adds the elements in a dlistint_t list.
 * @head: pointer to the head of the list
 * Return: the sum of the elements or 0 if head NULL.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux = head;

	if (head == NULL)
		return (sum);
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
