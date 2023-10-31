#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_sibling - that to add new right item
 * @node: node
 * Return:new node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->left == node)
{
if (!node->parent->right)
{
return (NULL);
}
else
{
return (node->parent->right);
}
}
if (node->parent->right == node)
{
if (!node->parent->left)
{
return (NULL);
}
else
{
return (node->parent->left);
}
}
return (node);
}
