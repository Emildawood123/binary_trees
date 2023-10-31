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
if (l == NULL)
{
node->right = NULL;
}
else
{
l->parent = node;
node->right = l;
}
node->parent = parent;
node->n = value;
parent->right = node;
node->left = NULL;
return (node);
}
