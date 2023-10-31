#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_leaves - that funcation return numbers of leaves
 * @tree: tree
 * Return: leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
return (helper(tree));
}
}
/**
 * helper - that help to take the numbers of leaves
 * @tree: tree
 * Return: leaves
*/
size_t helper(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if ((!tree->left) && (!tree->right))
{
return (1);
}
return (helper(tree->left) + helper(tree->right));
}
