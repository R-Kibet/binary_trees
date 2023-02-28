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

	result = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (result != NULL)
	{
		result->right = NULL;
		result->parent = parent;
		result->n = value;
	}
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
