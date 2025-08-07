#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_sibling - find sibling of node
 * @node: pointer to the node
 *
 *
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node == (node->parent)->left))
		sibling = (node->parent)->right;
	else if ((node == (node->parent)->right))
		sibling = (node->parent)->left;
	else
		return (NULL);

	return (sibling);
}
