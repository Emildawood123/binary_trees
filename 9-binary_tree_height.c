#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - taht to know height of tree
 * @tree: tree
 * Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left)
{
return (1 + binary_tree_height(tree->left));
}
else if (tree->right)
{
return (1 + binary_tree_height(tree->right));
}
else
{
return (0);
}
}
