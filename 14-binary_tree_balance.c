#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_balance - measure balance factor
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: -ve, +ve or 0 int to indicate balance factor . 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	return (0);

	left_height = 1+ binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	return (left_height - right_height);
}
