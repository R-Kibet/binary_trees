#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 * @tree: binary tree pointer
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsz, rsz;

	if (tree == NULL)
		return (0);

	lsz = binary_tree_size(tree->left);
	rsz = binary_tree_size(tree->right);

	return (lsz + 1 + rsz);
}
