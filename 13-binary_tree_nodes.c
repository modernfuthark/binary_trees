#include "binary_trees.h"

/**
 * binary_tree_nodes - Gets the total number of nodes in a tree
 * @tree: Binary tree
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
