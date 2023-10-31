#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_preorder - that function pre
 * @tree: tree
 * @func: fun
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree)
{
return;
}
if (func == NULL)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
