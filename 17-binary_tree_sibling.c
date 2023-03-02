#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling
 * @node: poiner to node sibling
 * Return: sinbling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);
}
