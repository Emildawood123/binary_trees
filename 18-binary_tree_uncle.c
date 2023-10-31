#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_uncle - that to add new right item
 * @node: node
 * Return:new node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
{
return (NULL);
}
if (!node->parent->parent)
{
return (NULL);
}
if (node->parent->parent->left == node->parent)
{
if (node->parent->parent->right == NULL)
{
return (NULL);
}
else
{
return (node->parent->parent->right);
}
}
if (node->parent->parent->right == node->parent)
{
if (node->parent->parent->left == NULL)
{
return (NULL);
}
else
{
return (node->parent->parent->left);
}
}
return (NULL);
}
