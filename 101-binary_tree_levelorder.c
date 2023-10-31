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
func(tree->left->n);
func(tree->right->n);
if (tree->left->left != NULL)
{
binary_tree_levelorder(tree->left, func);
}
if (tree->right->right != NULL)
{
binary_tree_levelorder(tree->right, func);
}
}
