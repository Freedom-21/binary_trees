#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that
 *		inserts as the right child of anothre node
 * @parent: a pointer to the node to insert the right child
 * @value: the value to store in the new node
 * Return: a pointer to the created node or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
		return (NULL);

	right_node->right = parent->right;

	if (right_node->right != NULL)
		right_node->right->parent = right_node;

	parent->right = right_node;

	return (right_node);
}
