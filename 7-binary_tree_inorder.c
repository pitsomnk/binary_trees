#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to apply to each node's value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

