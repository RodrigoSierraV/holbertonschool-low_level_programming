#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: given linked list
 * Return: Integer with the number of elements.
 */
size_t list_len(const list_t *h)
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
		thisnode = thisnode->next;
		nodes++;
	}
	return (nodes);
}
