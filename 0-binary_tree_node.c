#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: root node
 * @value: value to be created
 * Return: binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	result = malloc(sizeof(binary_tree_t));

	if (result != NULL)
	{
		result->left = NULL;
		result->right = NULL;
		result->parent = parent;
		result->n = value;
	}
	return (result);
}
