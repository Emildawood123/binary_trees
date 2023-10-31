#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_levelorder - taht to know height of tree
 * @tree: tree
 * @func: function to print
 * Return: balance
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
if (tree->parent == NULL)
{
func(tree->n);
}
if (tree->left)
{
func(tree->left->n);
}
if (tree->right)
{
func(tree->right->n);
}
if (tree->left && (tree->left->left != NULL || tree->left->right != NULL))
{
binary_tree_levelorder(tree->left, func);
}
if (tree->right && (tree->right->right != NULL || tree->right->left != NULL))
{
binary_tree_levelorder(tree->right, func);
}
}
