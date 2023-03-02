#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full
 * @tree: pointer to tree
 * Return: 0 /1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lft, rgt;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lft = binary_tree_is_full(tree->left);
	rgt = binary_tree_is_full(tree->right);

	if ((tree->left) && (tree->right))
		return (lft && rgt);
	return (0);
}
