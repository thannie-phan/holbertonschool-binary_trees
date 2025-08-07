#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  binary_tree_uncle - find uncle of node
 * @node: pointer to the node
 *
 *
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if ((node->parent == (node->parent->parent)->left))
		uncle = (node->parent->parent)->right;
	else if ((node->parent == (node->parent->parent)->right))
		uncle = (node->parent->parent)->left;
	else
		return (NULL);

	return (uncle);
}
