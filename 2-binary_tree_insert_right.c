#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node on the left child
 * @parent: root node
 * @value: value inserted
 * Return: new value
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (parent == NULL)
		return (NULL);

	result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
		return (NULL);

	result->left = NULL;
	result->parent = parent;
	result->n = value;

	if (parent->right != NULL)
	{
		result->right = parent->right;
		parent->right->parent = result;
	}
	else
	{
		result->right = NULL;
	}
	parent->right = result;
	return (result);

}
