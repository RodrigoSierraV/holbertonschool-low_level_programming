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
	while (head->parent != NULL)
		head = head->parent;

	while (head != NULL)
	{
		if (head->n > first->n && head->n > second->n)
			head = head->left;

		else if (head->n < first->n && head->n < second->n)
		   head = head->right;
		else break;
	}
	return (head);
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
	if(first && second)
		return ((binary_tree_t *)bta(first, first, second));
	return (NULL);
}
