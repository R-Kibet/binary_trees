#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks tree is perfect
 * @tree: pointer to root node
 * Return: 0 /1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int expectedDepth;
	bool check;

	expectedDepth  = find_depth_left(tree);
	check = isPerfect(tree, expectedDepth);

	return (check);
}

/**
 * find_depth_left - Measure left depth
 * @tree: pointer to node of tree to measure
 *
 * Return: depth of tree or 0 if NULL
 */

int find_depth_left(const binary_tree_t *tree)
{
	return (!tree ? 0 : 1 + find_depth_left(tree->left));
}

/**
 * isPerfect - bool if perfect
 * @tree: root node of tree to measure from
 * @expectedDepth: depth
 * Return: size of tree from a given node
 */

bool isPerfect(const binary_tree_t *tree, int expectedDepth)
{
	if (!tree)
		return (0);

	if (!tree->left != !tree->right)
		return (false);
	return (expectedDepth >= 0 &&
	   isPerfect(tree->left, expectedDepth - 1) &&
	   isPerfect(tree->right, expectedDepth - 1));
}
