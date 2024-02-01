#include "binary_trees.h"

/**
 *max - Function that measures the max of 2 numbers
 *@x: the frist number
 *@y: the second number
 *Return: the max of the 2 numbers
 */
int max(int x, int y)
{
	if (x >= y)
		return (x);
	else
		return (y);
}

/**
 *binary_tree_height - Function that measures the height of a binary tree
 *@tree: tree to go through
 *Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int maxx = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree)
			maxx = max(((tree->left) ? 1 : 0) +
				binary_tree_height(tree->left), ((tree->right) ? 1 : 0) +
				binary_tree_height(tree->right));
		return (maxx);
	}
}
