#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to be checked.
 *
 * Return: 1 if the node is a leaf,
 *         Otherwise - 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
