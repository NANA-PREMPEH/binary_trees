#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int depth_first_1 = binary_tree_depth(first);
	int depth_second_2 = binary_tree_depth(second);
	binary_tree_t *aux_f = (binary_tree_t *) first;
	binary_tree_t *aux_s = (binary_tree_t *) second;

	if (first == NULL || second == NULL)
		return (NULL);

	while (depth_first_1 < depth_second_2)
	{
		if (aux_s->parent == NULL)
			return (NULL);
		aux_s = aux_s->parent;
		depth_first_1++;
	}

	while (depth_second_2 < depth_first_1)
	{
		if (aux_f->parent == NULL)
			return (NULL);
		aux_f = aux_f->parent;
		depth_second_2++;
	}

	while (aux_f->n != aux_s->n)
	{
		if (aux_f->parent == NULL || aux_s->parent == NULL)
			return (NULL);
		aux_f = aux_f->parent;
		aux_s = aux_s->parent;
	}

	return (aux_f);
}

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;
	binary_tree_t *aux;

	if (tree == NULL)
		return (0);

	aux = (binary_tree_t *)tree;

	for (n = 0; aux->parent != NULL; n++)
	{
		aux = aux->parent; }

	return (n);
}
