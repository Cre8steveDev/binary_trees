#include "binary_trees.h"

/**
 * binary_tree_insert_left - Write a function that inserts a node as the left
 * child of another node
 * @parent: Parent of the node to append a left child
 * @value: Value to be added to the newly added node created
 * Return: Pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/**
	 * If parent already has a right child, the new node must take
	 * its place and the old right-child must be set as the
	 * right child of the new node
	 */
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->n = value;

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		temp->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
		parent->right = new_node;
	}

	return (new_node);
}
