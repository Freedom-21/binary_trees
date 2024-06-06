#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures depth of tree
 * @tree: a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->parent == NULL))
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
