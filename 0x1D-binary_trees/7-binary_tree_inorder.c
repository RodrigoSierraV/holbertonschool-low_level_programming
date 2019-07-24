#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * @tree: pointer to the root node of the tree to delete
 * @func: pointer to a function to execute with the result of the search
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
