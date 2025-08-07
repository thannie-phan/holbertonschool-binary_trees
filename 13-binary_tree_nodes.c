#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_nodes - measure no of nodes
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: no of nodes. 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
	return (0);

	left_size = binary_tree_nodes(tree->left);
	right_size = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + left_size + right_size);
	else
		return (left_size + right_size);

	return (total);
}
