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
if (node == NULL || parent == NULL)
{
return (NULL);
}
node->left = NULL;
node->n = value;
node->parent = parent;
node->right = NULL;
if (parent->right)
{
node->right = parent->right;
node->right->parent = node;
}
parent->right = node;
return (node);
}
