#include "binary_trees.h"

/**
 * binary_trees_is_perfect - checks if a binary tree is perfect
 *
 * @tree : the root
 * */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
