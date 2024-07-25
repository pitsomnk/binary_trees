#include "binary_trees.h"

/**
 * binary_tree_height_b - calculates the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 *         0 if the tree is NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively determine the height of the left and right subtrees */
	size_t left_height = binary_tree_height_b(tree->left);
	size_t right_height = binary_tree_height_b(tree->right);

	/* Return the greater of the two heights plus one for the current node */
	return (1 + ((left_height > right_height) ? left_height : right_height));
}

/**
 * binary_tree_balance - calculates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the difference between the heights of the left and right subtrees
 *         0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = (int)binary_tree_height_b(tree->left);
	int right_height = (int)binary_tree_height_b(tree->right);

	/* Balance factor is the difference between left and right subtree heights */
	return (left_height - right_height);
}

