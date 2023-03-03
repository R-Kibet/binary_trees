#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate right
 * @tree: pointer to tree
 * Return: rotated tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *y;

	if (tree == NULL || !tree->left)
		return (tree);

	y = tree->left;
	tree->parent = y;
	y->parent = tree->parent;

	tree->left = y->right;

	if  (tree->left)
		tree->left->parent = tree;

	y->right = tree;

	return (y);
}
