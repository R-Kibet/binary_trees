#include "binary_trees.h"

int get_power(int exp);

/**
 * binary_tree_is_perfect - checks tree is perfect
 * @tree: pointer to root node
 * Return: 0 /1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, size, pow;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);
	size = binary_tree_size(tree);

	if (size == 1)
		return (1);

	if (left >= 0 && right >= 0 && left == right)
	{
		pow = get_power(left + 1);

		if (pow - 1 == size)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * tree_height - Measure height
 * @tree: pointer to node of tree to measure
 *
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

/**
 * binary_tree_size - measure the size of a
 * binary tree from a given node
 * @tree: root node of tree to measure from
 *
 * Return: size of tree from a given node
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
 * get_power - get the power of 2 for a given number
 * @exp: exponent
 *
 * Return: power of 2 for given exponent
 */
int get_power(int exp)
{
	int pow, i;

	for (i = 0, pow = 1; i <= exp; i++)
	{
		pow *= 2;
	}
	return (pow);
}
