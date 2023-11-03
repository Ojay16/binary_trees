#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses s binary tree using post-order traversal.
 * @tree: Pointer to root node of the tree to traverse.
 * @func: Pointer to a function to call to each node.
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
