#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: pointer to parent node
 *
 * Return: void or do nothing is tree is null
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

