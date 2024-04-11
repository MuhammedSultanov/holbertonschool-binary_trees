#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts 
 * a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 *
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left =NULL;

	if (parent->left)
	{
		parent->left->newnode;
		newnode->left = parent->left;
	}
	parent->left = newnode;

	return (newnode);
}

