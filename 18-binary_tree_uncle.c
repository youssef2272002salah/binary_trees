#include "binary_trees.h"

/**
 *binary_tree_uncle - calculate the uncle of a node
 *
 *@tree : the root
 *
 *Return: the uncle of a node
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}