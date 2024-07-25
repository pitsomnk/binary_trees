#include "binary_trees.h"

/**
 * binary_tree_sibling - retrieves the sibling of a given node
 * @node: pointer to the node whose sibling is to be found
 *
 * Return: pointer to the sibling node
 *         NULL if the node is NULL
 *         NULL if the node has no parent
 *         NULL if the node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If the node is the left child, return the right child of the parent */
	if (node == node->parent->left)
		return (node->parent->right);

	/* If the node is the right child, return the left child of the parent */
	return (node->parent->left);
}

