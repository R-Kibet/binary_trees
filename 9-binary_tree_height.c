#include "binary_trees.h"

/**
 * binary_tree_height - height of tree
 * @tree: pointer to tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft, rgt;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lft = binary_tree_height(tree->left);
	rgt = binary_tree_height(tree->right);

	if (lft >= rgt)
	{
		return (lft + 1);
	}
	else
	{
		return (rgt + 1);
	}
}
