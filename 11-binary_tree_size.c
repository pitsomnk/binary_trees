#include "binary_trees.h"

/**
 * binary_tree_size - computes the total number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: the number of nodes in the tree
 *         0 if the tree is empty
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively count nodes in left and right subtrees and add 1 for the current node */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

