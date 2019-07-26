#include "binary_trees.h"

/**
 * isBST - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to delete
 * @prev: pointer to the previoust node of reference
 * Return: 1 if is BST, 0 if not
 */

int isBST(const binary_tree_t *tree, const binary_tree_t *prev)
{
	if (tree)
	{
		if (!isBST(tree->left, prev))
			return (0);

		if (prev != NULL && tree->n <= prev->n)
			return (0);

		prev = (binary_tree_t *)tree;
		return (isBST(tree->right, prev));
	}
	return (1);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to delete
 * Return: 1 if is BST, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *prev = NULL;
		return (isBST(tree, prev));
}
