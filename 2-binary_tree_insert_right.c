#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a binary tree note on right
 * @parent: pointer to the node to insert the right-child in
 * @value: the value stored
 *
 * Return: pointer to the created node or NULL if fail/parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (parent == NULL)
	return (NULL);

	result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
	return (NULL);

	result->n = value;
	result->parent = parent;
	result->left = NULL;
	result->right = NULL;

	if (parent->right != NULL)
	{
		result->right = parent->right;
		(parent->right)->parent = result;
	}

	parent->right = result;
	return (result);
}
