#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_height - measure height of binary tree
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: height. 0 is tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * is_perfect_recursive - help check if tree is perfect
 * @tree: point to root node
 * @deep: expected deep of all leaves
 * @level: current level in tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int deep, int level)
{
	int left_is_perfect, right_is_perfect;

	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (deep == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_is_perfect = is_perfect_recursive(tree->left, deep, level + 1);
	right_is_perfect = is_perfect_recursive(tree->right, deep, level + 1);

	return (left_is_perfect && right_is_perfect);
}

/**
 *  binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the root to start traversing
 *
 *
 * Return: 1 if perfect. 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	return (is_perfect_recursive(tree, height + 1, 0));
}
