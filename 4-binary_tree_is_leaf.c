#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_leaf - that node is have 2 children?
 * @node: node
 * Return: 1 or 0 yes or no
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if ((node->right || node->left))
{
return (0);
}
return (1);
}
