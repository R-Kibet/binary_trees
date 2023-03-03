#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate left
 * @tree: pointer to tree
 * Return: rotated tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y;

	if (tree == NULL || !tree->right)
		return (tree);

	y = tree->right;
	tree->parent = y;
	y->parent = tree->parent;

	tree->right = y->left;

	if  (tree->right)
		tree->right->parent = tree;

	y->left = tree;

	return (y);
}
