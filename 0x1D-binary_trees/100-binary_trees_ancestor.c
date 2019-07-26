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
	if (head == NULL)	/*Is there a tree*/
		return (NULL);

	if (head->parent != NULL)
	 	return bta(head->parent, first, second);
		 
	if (head->n > first->n && head->n > second->n) 	/* Search at the left */
		return bta(head->left, first, second);

	if (head->n < first->n && head->n < second->n)	/* Search at the right */
		return bta(head->right, first, second);

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
