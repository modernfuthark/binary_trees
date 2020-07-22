#include "binary_trees.h"

/**
 * binary_tree_preorder - Get nodes in the pre-order traversal method
 * @tree: Binary tree
 * @func: Function to use
 * Returns: Nothing, function is void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree || !func)
	{
		func(tree->n); /* Run function on first node */
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
