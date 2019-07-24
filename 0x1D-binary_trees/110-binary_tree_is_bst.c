#include "binary_trees.h"

/**
 * is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tr: pointer to the root node of the tree to delete
 * @min: (inorder) next min value at the left of the node
 * @max: (inorder) next max value at the right of the node
 * Return: 1 if is BST, 0 if not
 */

int is_bst(const binary_tree_t *tr,
			const binary_tree_t *min, const binary_tree_t *max)
{
	if (!tr)
		return (1);
	if (min != NULL && tr->n <= min->n)
		return (0);
	if (max != NULL && tr->n >= max->n)
		return (0);
	return (is_bst(tr->left, min, tr) && is_bst(tr->right, tr, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to delete
 * Return: 1 if is BST, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst(tree, NULL, NULL));
}
