#include "binary_trees.h"

/**
 * binary_trees_leavers - count number of leaves
 *
 * @tree: the root of the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
