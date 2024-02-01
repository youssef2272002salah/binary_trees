#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height
 *
 * @tree : the root
 *
 * Return: the height
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left < right ? right : left);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree-
 *
 * @tree: the root of the tree
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_height(tree->left) + 1; 
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;
	return (l - r);
}
