#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - that to add new right item
 * @parent: parent
 * @value: value
 * Return:new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
binary_tree_t *l = parent->right;
if (node == NULL || parent == NULL)
{
return (NULL);
}
node->right = NULL;
node->n = value;
node->parent = parent;
if (l)
{
node->left = l;
parent->left = node;
l->parent = node;
}
else
{
parent->left = node;
}
return (node);
}
