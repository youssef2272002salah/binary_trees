#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, level = 0;
    int is_perfect_left, is_perfect_right;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);

    if (height == 0)
        return (1);

    is_perfect_left = binary_tree_is_perfect(tree->left);
    is_perfect_right = binary_tree_is_perfect(tree->right);

    if (is_perfect_left && is_perfect_right)
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        if (tree->left != NULL && tree->right != NULL)
            return (1);
    }

    return (0);
}
