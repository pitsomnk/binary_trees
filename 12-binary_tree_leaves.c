#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaf nodes in a binary tree
 * @tree: pointer to the root node of the tree to examine
 *
 * Return: the total number of leaves in the tree
 *         0 if the tree is empty
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check if the node is a leaf (no children) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

