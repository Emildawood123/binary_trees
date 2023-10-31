#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - that to add new right item
 * @parent: parent
 * @value: value
 * Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
binary_tree_t *l = parent->left;
if (node == NULL)
{
return (NULL);
}
if (l == NULL)
{
node->left = NULL;
}
else
{
l->parent = node;
node->left = l;
}
node->parent = parent;
node->n = value;
node->right = NULL;
parent->left = node;
return (node);
}
