#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node where the subsequent nodes are added
 *
 * @parent: - is a pointer to the parent node
 * @value: - is the value assigned to the node
 * Return: a pointer to the new node, or NULL when it fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
