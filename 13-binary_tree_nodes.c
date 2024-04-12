#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of
 * the tree to count the number of nodes.
 *
 * Return: Nodes number of the tree elements.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if(!tree)
		return (0);
	if(!tree->right && !tree->left)
		return (0);
	else
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
}