#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node in a binary tree
 * @parent: Parent node
 * @value: Value inside new node
 * Return: New node, NULL on error
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}
