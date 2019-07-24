#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (node->n == node->parent->right->n)
	{
		if (!node->parent->left)
			return (NULL);
		else
			return (node->parent->left);
	}
	else
	{
		if (!node->parent->right)
			return (NULL);
		else
			return (node->parent->right);
	}
}
