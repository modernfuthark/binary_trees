#include "binary_trees.h"

/**
 * binary_tree_leaves - Returns the amount of leaves attached to a root
 * @tree: Binary tree
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Total = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	Total = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (Total);
}
