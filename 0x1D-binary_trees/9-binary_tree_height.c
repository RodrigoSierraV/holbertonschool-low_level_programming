#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node in a binary tree
 * @tree: pointer to the node to measure the height
 * Return: tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_hight = 0;
	size_t right_hight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_hight = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_hight = 1 + binary_tree_height(tree->right);

	return ((left_hight > right_hight) ? left_hight : right_hight);
}
