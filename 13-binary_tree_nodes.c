#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - to declaration the size of tree
 * @tree: tree
 * Return: size of tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (helper2(tree));
}
/**
 * helper2 - that help to take the numbers of leaves
 * @tree: tree
 * Return: leaves
*/
size_t helper2(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (tree->left && tree->right)
{
return (1 + helper2(tree->left) + helper2(tree->right));
}
if (tree->left || tree->right)
{
return (1 + helper2(tree->left) + helper2(tree->right));
}
return (0);
}
