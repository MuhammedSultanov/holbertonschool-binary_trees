#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - a function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: depth of the binary tree or 0 depends on the case
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t leftd, rightd;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		rightd = binary_tree_depth(tree->right);
		leftd = binary_tree_depth(tree->left);
	}
	if (leftd > rightd)
		return (1 + leftd);
	else
		return (1 + rightd);
}
