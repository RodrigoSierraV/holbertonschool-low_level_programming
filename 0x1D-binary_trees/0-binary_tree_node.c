#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node from a parent
 * @parent: Parent of the new node
 * @value: Value to stored in the new node
 * Return: Pointer to new node. (NULL) in case of failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		new_node->parent = parent;
		if (parent->n > value && !parent->left)
			parent->left = new_node;
		else if (!parent->right)
			parent->right = new_node;
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}