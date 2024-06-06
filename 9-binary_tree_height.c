#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures height of tree
 * @tree: a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height < right_height)
		return (right_height + 1);
	else
		return (left_height + 1);
}
