#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * binary_tree_delete - delete the entire binary tree
 *
 * @tree : the root of the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	printf("Deleting node with value: %d\n", tree->n);
	free(tree);
}
