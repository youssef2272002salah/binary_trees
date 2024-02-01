#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
    {
        int  x=0 , y=0;
        if (tree == NULL)
            return 0;
        else             
            {
                 x = binary_tree_size(tree->right);
                 y = binary_tree_size(tree->left);
                 return 1+x+y;
                
            }
    }