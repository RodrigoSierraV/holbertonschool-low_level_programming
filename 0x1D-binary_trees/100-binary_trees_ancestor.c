#include "binary_trees.h"
binary_tree_t *LCA(binary_tree_t *root, binary_tree_t *f, binary_tree_t *s);
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the node to count the number of nodes
 * Return: 0 or 1 if tree is full
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *root = (binary_tree_t*)first;
printf("quehps%d\n", root->n);
	if (!first || !second)
		return (NULL);

	if (!first->parent || !second->parent)
		return (NULL);

	while (root->parent)
	{

		root = root->parent;
printf("quejue %d\n", root->n);
	}
	return (LCA(root, (binary_tree_t*)first, (binary_tree_t*)second));
}

binary_tree_t *LCA(binary_tree_t *root, binary_tree_t *f, binary_tree_t *s)
{
	binary_tree_t *left, *right;
printf("por aqui\n");
	if (root == NULL)
		return (NULL);
	if (root->n == f->n || root->n == s->n)
		return (root);
	if (root->left)
	left = LCA(root->left, f, s);
	if (root->right)
	right = LCA(root->right, f, s);
	if (left && right)
		return (root);
	if (!left && !right)
		return (NULL);

	return ((left != NULL) ? left : right);
}
