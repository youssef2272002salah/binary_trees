#include "binary_trees.h"

int max (int x ,int y)
    {
        if(x>=y)
            return x;
        else 
            return y;    
    }
size_t binary_tree_height(const binary_tree_t *tree)
    {
        int maxx = 0;
        if (tree == NULL)
            return 0;

        else             
            {
                // 55555555555555555
                if(tree)
                    maxx = max(((tree->left)?1:0) + binary_tree_height(tree->left),((tree->right)?1:0) +binary_tree_height(tree->right));
                return maxx;
            }
    }
