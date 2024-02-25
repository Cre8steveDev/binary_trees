#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a root is a binary
 * @node: Node to be checked if it's a root
 * Return: 1 if root and 0 if not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
