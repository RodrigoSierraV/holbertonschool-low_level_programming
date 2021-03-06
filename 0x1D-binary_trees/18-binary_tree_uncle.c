#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to measure the height
 * Return: pointer to the uncle or NULL if tree is null or uncle is null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);

	return (NULL);
}
