#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a binary tree
 * @tree: pointer to the node whose depth is to be measured
 *
 * Return: the depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

