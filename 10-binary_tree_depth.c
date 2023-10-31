#include <stddef.h>
#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree){
size_t i = 0;
const binary_tree_t *temp = tree;
if (!tree){
return (0);
}
while (temp->parent)
{
temp = temp->parent;
i++;
}
return (i);
}