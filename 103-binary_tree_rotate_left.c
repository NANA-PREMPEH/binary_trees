#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);

	auxially = tree->right;
	if (aux->left != NULL)
		aux->left->parent = tree;
	aux->parent = tree->parent;
	tree->right = aux->left;
	aux->left = tree;
	tree->parent = auxially;

	return (auxially);
}
