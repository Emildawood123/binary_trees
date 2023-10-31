#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_perfect - that to add new right item
 * @tree: tree
 * Return:new node
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int right = 0;
int left = 0;
if (tree == NULL)
{
return (0);
}
helper4(tree->left, &right);
helper4(tree->right, &left);
if (left == right)
{
return (1);
}
else
{
return (0);
}
}
/**
 * helper4 - that to help only
 * @tree: tree
 * @flag: flag
 * Return: void
*/
void helper4(const binary_tree_t *tree, int *flag)
{
if (tree == NULL)
{
return;
}
if (((tree->right) && (!tree->left)) || ((!tree->right) && (tree->left)))
{
*flag = 0;
return;
}
else
{
*flag = *flag + 1;
}
helper4(tree->right, flag);
helper4(tree->left, flag);
}
