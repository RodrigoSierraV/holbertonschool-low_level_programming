#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *findloop(listint_t *head, listint_t *current, listint_t *fast);
/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head: pointer to the given listint.
 * Return: an int with the number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h);
{
	listint_t *current = *h, *fast = *h, *loop;
	size_t nodes = 0;

	loop = findloop(*h, current, fast);
	if (loop == NULL)
		return (free_listint(*h));
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
 * free_listint - frees a listint_t list.
 * @head: given linked list
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
