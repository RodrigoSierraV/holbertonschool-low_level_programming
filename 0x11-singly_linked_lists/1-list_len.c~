#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: given linked list
 * Return: Integer with the number of nodes.
 */
size_t print_list(const list_t *h)
{
	list_t *thisnode = (list_t *)h;
	int nodes = 0;

	while (thisnode != NULL)
	{
		if (!thisnode->str)
		{
			thisnode->str = "(nil)";
			thisnode->len = 0;
		}
			printf("[%d] %s\n", thisnode->len, thisnode->str);
			thisnode = thisnode->next;
			nodes++;
	}
	return (nodes);
}
