#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibiling of a node
 * @node: Tree node
 * Return: Sibling of node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
