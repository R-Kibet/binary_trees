#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor
 * @tree: pointer to root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lb, rb;

	if (tree == NULL)
		return (0);

	lb = tree_height(tree->left);
	rb = tree_height(tree->right);

	return (lb - rb);
}

/**
 * tree_height - Measure the height
 * @tree: pointer to node
 * Return: height of tree or -1 if NULL
 */

int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
