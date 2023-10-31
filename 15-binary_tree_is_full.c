
#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_full - that to add new right item
 * @tree: tree
 * Return:new node
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
int f = 1;
if (tree == NULL)
{
return (0);
}
helper3(tree, &f);
return (f);
}
/**
 * helper3 - taht help to check it is full or no
 * @tree: tree
 * @flag: flag
 * Return: void
*/
void helper3(const binary_tree_t *tree, int *flag)
{
if (!tree)
{
return;
}
if (((tree->right) && (!tree->left)) || ((!tree->right) && (tree->left)))
{
*flag = 0;
return;
}
helper3(tree->left, flag);
helper3(tree->right, flag);
}
