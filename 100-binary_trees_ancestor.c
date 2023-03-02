#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestors
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: ancestors
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *la, *ra;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	la = first->parent;
	ra = second->parent;

	if (first == ra || la == NULL || (!la->parent && ra))
		return (binary_trees_ancestor(first, ra));
	else if (la == second || !ra || (!ra->parent && la))
		return (binary_trees_ancestor(la, second));
	return (binary_trees_ancestor(la, ra));

}
