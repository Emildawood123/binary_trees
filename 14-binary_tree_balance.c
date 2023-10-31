#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_balance - taht to know height of tree
 * @tree: tree
 * Return: balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left && tree->right)
{
return (2);
}
if ((!tree->left) && (!tree->right))
{
return (0);
}
if ((!tree->left) && (tree->right))
{
return (-1);
}
if ((tree->left) && (!tree->right))
{
return (1);
}
return (0);
}
