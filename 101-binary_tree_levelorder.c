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

/**
 * print_level - Prints the nodes in the tree
 * @tree: tree node
 * @level: level
 * @func: function pointer
 */

void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{

	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder -level order traversal
 * @tree: pointer to tree node
 * @func: pointer to function
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (!tree || !func)
		return;
	h = binary_tree_height(tree);
	for (i = 1; i <= h; i++)
		print_level(tree, i, func);

}
