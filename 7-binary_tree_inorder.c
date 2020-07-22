#include "binary_trees.h"

/**
 * binary_tree_inorder - Get nodes in the in-order traversal method
 * @tree: Binary tree
 * @func: Function to use
 * Return: Nothing, function is void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
