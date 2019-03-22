#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: given linked list
 * @str: given string to add in the new element.
 * Return: address of the new element or NULL if fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastnode;
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->str = strdup(str);
	while (str[len])
		len++;
	newnode->len = len;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	lastnode = *head;
	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	return (*head);
}
