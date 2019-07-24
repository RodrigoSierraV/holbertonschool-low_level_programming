#include "binary_trees.h"

/**
 * print_level - print all the nodes of a certain level
 * @tree: pointer to the node to measure the height
 * @func: Pointer to a function to call for each node.
 * @level: floor where the nodes are located
 * Return: tree is NULL, return 0
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * height_ - measures the height of a node in a binary tree
 * @tree: pointer to the node to measure the height
 * Return: tree is NULL, return 0
 */
size_t height_(const binary_tree_t *tree)
{
	size_t left_hight = 0;
	size_t right_hight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_hight = 1 + height_(tree->left);

	if (tree->right)
		right_hight = 1 + height_(tree->right);

	return ((left_hight > right_hight) ? left_hight : right_hight);
}

/**
 * binary_tree_levelorder - function that goes through a binary tree using
 * level-order traversal
 * @tree: pointer to the node to measure the height
 * @func: Pointer to a function to call for each node.
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	int i, h;

	h = height_(tree);
	for (i = 1; i <= h + 1; i++)
		print_level(tree, i, func);
}
