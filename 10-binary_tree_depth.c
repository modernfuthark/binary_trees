#include "binary_trees.h"

/**
 * binary_tree_depth - Gets the depth of a node in a binary tree
 * @tree: Binary tree
 * Return: Depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Node_depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		Node_depth++;
	}
	return (Node_depth);
}
