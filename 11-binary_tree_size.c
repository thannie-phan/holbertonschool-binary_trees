#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_size - measure size of tree aka how many nodes
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: size. 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;
	size_t total = 0;

	if (tree == NULL)
	return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	total = 1 + left_size + right_size;
	return (total);
}
