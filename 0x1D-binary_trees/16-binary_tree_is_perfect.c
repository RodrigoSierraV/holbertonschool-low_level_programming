#include "binary_trees.h"

/**
 * binary_tree_height_ - measures the height of a node in a binary tree
 * @tree: pointer to the node to measure the height
 * Return: tree is NULL, return 0
 */

size_t binary_tree_height_(const binary_tree_t *tree)
{
	size_t left_hight = 0;
	size_t right_hight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_hight = 1 + binary_tree_height_(tree->left);

	if (tree->right)
		right_hight = 1 + binary_tree_height_(tree->right);

	return ((left_hight > right_hight) ? left_hight : right_hight);
}


/**
 * binary_tree_is_perfect - measures if a tree is perfect
 * @tree: pointer to the root node of the treeh
 * Return: tree is NULL, return 0, 1 if it is perfect, 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* No tree */

	int left_hight = 0;
	int right_hight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_hight = 1 + binary_tree_height_(tree->left);

	if (tree->right)
		right_hight = 1 + binary_tree_height_(tree->right);

	if (left_hight - right_hight == 0)
		return (1);
	return (0);
}
