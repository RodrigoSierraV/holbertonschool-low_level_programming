#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t findloop(listint_t *, listint_t *, listint_t *, size_t nodes);
/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head: pointer to the given listint.
 * Return: an int with the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = (listint_t *)head, *fast = (listint_t *)head;
	size_t nodes = 0;

	return (findloop((listint_t *)head, current, fast, nodes));
}
/**
 * findloop - finds a loop in a linked list.
 * @head: pointer to the given listint.
 * @current: pointer to the given listint.
 * @fast: pointer to the given listint.
 * @nodes: number of nodes.
 * Return: an int with the number of nodes in the list.
 */
size_t findloop(listint_t *head, listint_t *current, listint_t *fast, size_t nodes)
{
while (current && fast && fast->next)
{
	current = current->next;
	fast = fast->next->next;
	if (current == fast)
	{
		if (current != head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			nodes++;
			head = head->next;
			current = head;
			fast = head;
			findloop(head, current, fast, nodes);
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			nodes++;
			fast = fast->next;
			do {
				printf("[%p] %d\n", (void *)fast, fast->n);
				fast = fast->next;
				nodes++;
			} while (current != fast);
			return (nodes);
		}
	}
}
return (nodes);
}
