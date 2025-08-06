#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_leaves - measure no of leaves
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: no of leaves. 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_size = binary_tree_leaves(tree->left);
	right_size = binary_tree_leaves(tree->right);

	total = left_size + right_size;

	return (total);
}
