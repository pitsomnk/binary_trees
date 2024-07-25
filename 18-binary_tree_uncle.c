#include "binary_trees.h"

/**
 * binary_tree_uncle - retrieves the uncle of a specified node
 * @node: pointer to the node whose uncle is to be found
 *
 * Return: pointer to the uncle node if it exists
 *         NULL if the node or its parent is NULL
 *         NULL if the node does not have an uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* The uncle is the sibling of the node's parent */
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - identifies the sibling of a given node
 * @node: pointer to the node to find the sibling of
 *
 * Return: pointer to the sibling node if it exists
 *         NULL if the node or its parent is NULL
 *         NULL if the node does not have a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Determine if the node is the left or right child and return the opposite child */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

