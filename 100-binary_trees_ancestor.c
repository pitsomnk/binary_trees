#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 *         NULL if no common ancestor exists or either node is NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	/* Adjust the depth of the deeper node to match the shallower node */
	size_t depth_first = binary_tree_depth(first);
	size_t depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	/* Move both nodes up until a common ancestor is found */
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL); /* No common ancestor found */
}

/**
 * binary_tree_depth - calculates the depth of a node within a binary tree
 * @tree: pointer to the node whose depth is to be calculated
 *
 * Return: depth of the node
 *         0 if the node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* Traverse up to the root to calculate depth */
	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

