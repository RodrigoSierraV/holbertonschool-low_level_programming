#include "binary_trees.h"

/**
 * bst_search - search for a value in a binary search tree
 * @tree: pointer to the root node of the tree to delete
 * @value: data to be located in the tree
 * Return: 1 if is BST, 0 if not
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *node;

	if (tree)
	{
		if (value == tree->n)
			return (tree->n);

		if (value > tree->n)
			return (bst_search(tree->right, value));

		if (value < tree->n)
			return (bst_search(tree->left, value));
	}
	return (NULL);
}
