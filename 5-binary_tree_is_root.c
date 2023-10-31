#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_root - that node is a root
 * @node: node
 * Return: 1 or 0 yes or no
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (!node->parent)
{
return (1);
}
return (0);
}
