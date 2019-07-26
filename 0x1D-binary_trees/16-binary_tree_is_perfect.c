#include "binary_trees.h"

/**
 * binary_tree_h_ - measures the height of a node in a binary tree
 * @tree: pointer to the node to measure the height
 * Return: tree is NULL, return 0
 */

size_t binary_tree_h_(const binary_tree_t *tree)
{
	size_t left_hight = 0;
	size_t right_hight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_hight = 1 + binary_tree_h_(tree->left);

	if (tree->right)
		right_hight = 1 + binary_tree_h_(tree->right);

	return ((left_hight > right_hight) ? left_hight : right_hight);
}


/**
 * binary_tree_is_perfect - measures if a tree is perfect
 * @tree: pointer to the root node of the treeh
 * Return: tree is NULL, return 0, 1 if it is perfect, 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);
	
	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_h_(tree->left);
	right = binary_tree_h_(tree->right);
	if (left != right)
		return (0);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left == 0 || right == 0)
		return (0);

	return (1);
}
