#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t number = 0;
	binary_tree_t *auxiliary;

	if (tree == NULL)
		return (0);

	auxiliary = (binary_tree_t *)tree;

	for (number = 0; auxiliary->parent != NULL; number++)
	{
		auxiliary = auxiliary->parent; }

	return (number);
}
