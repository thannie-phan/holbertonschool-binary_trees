#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_height_special - measure height of binary tree
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: height. 0 is tree is NULL.
 */

int binary_tree_height_special(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	return (left_height + 1);
	else
	return (right_height + 1);
}


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

	left_height = binary_tree_height_special(tree->left);
	right_height = binary_tree_height_special(tree->right);

	return (left_height - right_height);
}
