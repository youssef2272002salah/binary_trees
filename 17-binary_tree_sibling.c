#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
    {
        if(node == NULL)
            return (NULL);
        if (node->parent == NULL)
            return (NULL);
        if(node->parent->left == node)
            {
                if(node->parent->right)
                    return node->parent->right;
                else 
                    return (NULL);
            }
        else
            {
                if(node->parent->left)
                    return node->parent->left;
                else 
                    return (NULL);
            }   
    }