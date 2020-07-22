#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a leaf in a binary tree
 * @node: Node to check
 * Return: 1 if node is a leaf, 0 if not.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
