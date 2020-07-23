#include "binary_trees.h"
size_t Recursive_helper(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Determines if a tree is perfect or not
 * @tree: Binary tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int Left_nodes = 0, Right_nodes = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	Left_nodes = binary_tree_is_perfect(tree->left);
	Right_nodes = binary_tree_is_perfect(tree->right);
	return (Left_nodes == Right_nodes);
}

/**
 * binary_tree_height - Return the height of a binary tree
 * @tree: Binary tree
 * Return: Height of tree 'tree'
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (Recursive_helper(tree) - 1);
}

/**
 * Recursive_helper - Helper function to count recuirsivly
 * @tree: Binary tree
 * Return: Height of tree 'tree'
 */
size_t Recursive_helper(const binary_tree_t *tree)
{
	size_t Height_left, Height_right;

	if (!tree)
		return (0);
	Height_left = Recursive_helper(tree->left);
	Height_right = Recursive_helper(tree->right);


	if (Height_left > Height_right) /* Get the longest height */
		return (Height_left + 1);
	return (Height_right + 1);
}
