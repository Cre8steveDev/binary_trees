#include "binary_trees.h"

/**
 * binary_tree_preorder - Binary Tree preorder visitation
 * @tree: Binary tree to be traversed
 * @func: Function pointer to be called on each visited node
 * Return: Returns nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
