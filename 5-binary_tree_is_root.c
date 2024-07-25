#include "binary_trees.h"

/**
 * binary_tree_is_root - determines if a node is the root of the tree
 * @node: the node to evaluate
 *
 * Return: 1 if the node is the root
 *         0 if the node is not the root
 *         0 if the node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}

