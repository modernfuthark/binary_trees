#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node right of the parent
 * @parent: Parent node
 * @value: Value of new node
 * Return: Pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New;

	if (!parent)
		return (NULL);

	New = malloc(sizeof(binary_tree_t));
	if (!New)
		return (NULL);

	New->n = value;
	New->parent = parent;
	New->left = NULL;

	if (parent->right)
	{
		New->right = parent->right;
		parent->right->parent = New;
	}
	parent->right = New;

	return (New);
}
