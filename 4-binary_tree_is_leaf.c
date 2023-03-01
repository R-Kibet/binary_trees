#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: node
 * Return:; 0/1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL)
	{
		binary_tree_is_leaf(node->left);
		return (0);
	}
	if (node->right != NULL)
	{
		binary_tree_is_leaf(node->right);
		return (0);
	}
	return (1);
}
