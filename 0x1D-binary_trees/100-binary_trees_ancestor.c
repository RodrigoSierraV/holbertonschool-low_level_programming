#include "binary_trees.h"

/**
 * bta - helper function. Finds the ancestor of two nodes
 * @head: Root of the tree
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function returns NULL
 */

const binary_tree_t *bta(const binary_tree_t *head, const binary_tree_t *first,
						 const binary_tree_t *second)
{
	const binary_tree_t *left, *right;

	if (!head)
		return (NULL);

	if (head->n == first->n || head->n == second->n)
		return (head);

	left = bta(head->left, first, second);
	right = bta(head->right, first, second);

	if (left && right)
		return (head);

	return (left != NULL ? left : right);
}

/**
 * binary_tree_ancestor - function that find the ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function returns NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	const binary_tree_t *h;

	if (first && second)
	{
		h = first;
		while (h->parent != NULL && h != NULL)
			h = h->parent;

		return ((binary_tree_t *)bta(h, first, second));
	}
	return (NULL);
}
