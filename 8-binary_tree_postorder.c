#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)){
if (!tree){
return;
}
binary_tree_inorder(tree->left,func);
binary_tree_inorder(tree->right,func);
func(tree->n);
}