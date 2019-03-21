#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: given linked list
 * @str: given string to add in the new element
 * Return: address of the new element or NULL if fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *dup = strdup(str);
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = dup;
	while (dup[len])
		len++;
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
