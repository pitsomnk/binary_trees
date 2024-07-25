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
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
