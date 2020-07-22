#include "binary_trees.h"

/**
 * binary_tree_postorder - Get nodes in the post-order traversal method
 * @tree: Binary tree
 * @func: Function to use
 * Return: Nothing, function is void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
