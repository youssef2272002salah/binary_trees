#include "binary_trees.h"

/**
 * max - return the max of two numbers
 *
 * @x: first number
 * @y: second number
 * Return: the max of two numbers
*/
int max (int x ,int y)
{
        if(x>=y)
            return x;
        else 
            return y;    
}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: the root of the tree
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
        int maxx = 0;
        if (tree == NULL)
            return 0;
        else             
            {
                if(tree)
                    maxx = max(((tree->left)?1:0) + binary_tree_height(tree->left),((tree->right)?1:0) +binary_tree_height(tree->right));
                return maxx;
            }
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
