#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node left of the parent
 * @parent: Parent node
 * @value: Value of new node
 * Return: Pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New;

	if (!parent)
		return (NULL);

	New = malloc(sizeof(binary_tree_t));
	if (!New)
		return (NULL);

	New->n = value;
	New->parent = parent;
	New->right = NULL;

	if (parent->left)
	{
		New->left = parent->left;
		parent->left->parent = New;
	}
	parent->left = New;

	return (New);
}
