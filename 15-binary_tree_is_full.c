#include "binary_trees.h"

/**
 * binary_tree_is_full - determines if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full
 *         0 if the tree is not full
 *         0 if the tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check if the node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Check if both children are present and recursively check subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* One child is missing, so the tree is not full */
	return (0);
}

