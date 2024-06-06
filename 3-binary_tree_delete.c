#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes entire tree
 * @tree: a pointer to root node of tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
