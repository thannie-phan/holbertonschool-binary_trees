#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a binary tree note on left
 * @parent: pointer to the node to insert the left-child in
 * @value: the value stored
 *
 * Return: pointer to the created node or NULL if fail/parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	return (NULL);

	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (result == NULL)
	return (NULL);

	result->n = value;
	result->parent = parent;
	result->left = NULL;
	result->right = NULL;

	if (parent->left != NULL)
	{
		result->left = parent->left;
		(parent->left)->parent = result;
	}
	parent->left = result;
	return (result);
}
