#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes
 * @tree: pointer to root node
 * Return: node count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ln,  rn, count;

	count = 1;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	ln = binary_tree_nodes(tree->left);
	rn = binary_tree_nodes(tree->right);

	count += (ln + rn);
	return (count);
}
