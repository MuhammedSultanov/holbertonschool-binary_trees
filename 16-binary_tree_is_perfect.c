#include "binary_trees.h"

/**
 * binary_tree_is_perfect - that checks if a binary tree is perfect
 * @tree: a pointer to the root node of tree
 * Return: if tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if ((left_h - right_h) == 0)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of tree
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftcount = 0, rightcount = 0;

	if (tree == NULL)
		return (0);
	leftcount = leftcount + binary_tree_height(tree->left);
	rightcount = rightcount + binary_tree_height(tree->right);

	if (leftcount > rightcount)
		return (leftcount + 1);
	else
		return (rightcount + 1);
}
