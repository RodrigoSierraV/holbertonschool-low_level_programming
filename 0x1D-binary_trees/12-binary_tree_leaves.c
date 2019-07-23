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

	/* There are two children, then there are two leaves*/
	if (tree->left && tree->right)
		return (2);

	/* There is one children */
	return (1);
}
