#include "binary_trees.h"

/**
 * binary_tree_preorder - a function to traverse via preorder fasion
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: Nothing if tree or func is NULL.
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
