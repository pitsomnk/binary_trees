#include "binary_trees.h"

/**
 * binary_tree_levelorder - performs a level-order traversal of a binary tree
 * @tree: pointer to the root of the tree to traverse
 * @func: function pointer to be executed for each node's value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t current_level, total_levels;

	if (tree == NULL || func == NULL)
		return;

	total_levels = binary_tree_height(tree) + 1;

	/* Traverse each level of the tree */
	for (current_level = 1; current_level <= total_levels; current_level++)
		level_order_helper(tree, func, current_level);
}

/**
 * level_order_helper - visits nodes at a specific level of the tree
 * @tree: pointer to the tree to traverse
 * @func: function pointer to be executed for each node's value
 * @level: the current level to process
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		btlo_helper(tree, func, level);
}

/**
 * btlo_helper - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
