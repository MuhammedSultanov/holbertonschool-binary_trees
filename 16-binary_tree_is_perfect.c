#include "binary_trees.h"
/**
 * binary_tree_is_perfect - that checks if a binary tree is perfect
 * @tree: a pointer to the root node of tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
