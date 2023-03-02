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

/**
 * checkComplete - Check if the tree is complete
 * @tree: pointer to tree
 * @count: int count
 * Return: 0 or 1
 */

int checkComplete(const binary_tree_t *tree, int count)
{

	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (count);

	left = checkComplete(tree->left, 2 * count + 1);
	right = checkComplete(tree->right, 2 * count + 2);

	return ((left > right) ? left : right);
}

/**
 * binary_tree_is_complete - binary tree is complete
 * @tree: tree node
 * Return: 0 / 1
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size, complete;

	size = binary_tree_size(tree);
	complete = checkComplete(tree, 0);

	if (!tree)
		return (0);

	if (size == complete + 1)
		return (1);
	return (0);
}
