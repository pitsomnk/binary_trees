#include "binary_trees.h"

/**
 * binary_tree_preorder - performs a pre-order traversal on a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to apply to each node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

