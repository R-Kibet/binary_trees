#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node on the left child
 * @parent: root node
 * @value: value inserted
 * Return: new value
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (parent == NULL)
		return (NULL);

	result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
		return (NULL);

	result->n = value;
	result->parent = parent;
	result->right = NULL;

	if (parent->left != NULL)
	{
		result->left = parent->left;
		parent->left->parent = result;
	}
	else
	{
		result->left = NULL;
	}
	parent->left = result;
	return (result);
}
