#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_size - to declaration the size of tree
 * @tree: tree
 * Return: size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
