#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures size of tree
 * @tree: a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
