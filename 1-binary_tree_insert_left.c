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
binary_tree_t *node;
if (parent == NULL)
{
return (NULL);
}
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}
node->left = NULL;
node->n = value;
node->parent = parent;
node->right = NULL;
if (parent->left)
{
node->left = parent->left;
node->left->parent = node;
}
parent->left = node;
return (node);
}
