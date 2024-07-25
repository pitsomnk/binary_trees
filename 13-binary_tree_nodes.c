#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes that have at least one child
 * @tree: pointer to the root node of the tree to analyze
 *
 * Return: the count of nodes with at least one child
 *         0 if the tree is empty or if all nodes are leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* A node is counted if it has at least one child */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}

/**
 * binary_tree_size - calculates the total number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: total number of nodes in the tree
 *         0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_leaves - counts the leaf nodes in a binary tree
 * @tree: pointer to the root node of the tree to examine
 *
 * Return: total number of leaf nodes in the tree
 *         0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* A node is a leaf if it has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

