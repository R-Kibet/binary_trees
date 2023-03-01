#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves
 * @tree: pointer to the tree
 * Return: no of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lf, rf;

	if (tree == NULL)
		return (0);

	if  (tree->left == NULL && tree->right == NULL)
		return (1);
	lf = binary_tree_leaves(tree->left);
	rf = binary_tree_leaves(tree->right);

	return (lf + rf);
}
