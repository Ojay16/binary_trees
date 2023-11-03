#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 *			     of another in a binary tree.
 * @parent: A pointer to node to insert the left-child.
 * @value: Value to be stored in the new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *	   ekse - a pointer to the new node.
 *
 * Description: If a parent node already has a left child,
 *		the new node will replace it, and the old
 *		left child will become the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
