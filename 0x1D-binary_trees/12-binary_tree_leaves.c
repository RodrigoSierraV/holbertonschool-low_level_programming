#include "binary_trees.h"

/**
 *  binary_tree_leaves - counts the number of leaves of the a node
 * @tree: pointer to the node to measure the depth
 * Return: tree is NULL, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* No tree */
	if (!tree)
		return (0);

	/* we are located in a leaf */
	if (!tree->left && !tree->right)
		return (1);

	else
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
}
