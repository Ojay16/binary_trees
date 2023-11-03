#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *			      of another in a binary tree.
 * @parent: A pointer to node to insert the right-child.
 * @value: Value to be stored in the new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *	   else - Pointer to the new node.
 *
 * Description: If the parent already has a right child,
 *		the new node replaces it, and the old right child
 *		becomes the new node's right child.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
