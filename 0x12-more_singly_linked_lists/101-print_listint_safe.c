#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *findloop(listint_t *head, listint_t *current, listint_t *fast);
/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head: pointer to the given listint.
 * Return: an int with the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = (listint_t *)head, *fast = (listint_t *)head, *loop;
	size_t nodes = 0;

	loop = findloop((listint_t *)head, current, fast);
	if (loop == NULL)
		return (print_listint(head));
	while (head != loop)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	nodes++;
	head = head->next;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	nodes++;
	fast = loop->next;
	do {
		printf("[%p] %d\n", (void *)fast, fast->n);
		fast = fast->next;
		nodes++;
	} while (loop != fast);
	printf("-> [%p] %d\n", (void *)loop, loop->n);
	return (nodes);
}
/**
 * findloop - finds a loop in a linked list.
 * @head: pointer to the given listint.
 * @current: pointer to the given listint.
 * @fast: pointer to the given listint.
 * Return: an int with the number of nodes in the list.
 */
listint_t *findloop(listint_t *head, listint_t *current, listint_t *fast)
{
while (current && fast && fast->next)
{
	current = current->next;
	fast = fast->next->next;
	if (current == fast)
	{
		if (current == head)
			return (current);
		head = head->next;
		current = head;
		fast = head;
		findloop(head, current, fast);
	}
}
return (NULL);
}
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the given listint.
 * Return: an int with the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
