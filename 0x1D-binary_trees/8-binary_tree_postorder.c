#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a BT with postorder
 * @tree: pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
	/*The function is print */
}
