#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_node - that to create new node for tree node
 * @parent:parent of that node and n for it
 * @value:value
 * Return: new Node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}
node->left = NULL;
node->right = NULL;
node->n = value;
node->parent = parent;
return (node);
}
