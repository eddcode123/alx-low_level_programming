#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserted left child node
 * @parent: pointer to parent node
 * @value: data to add to left child
 *
 * Return: pointer to left child or null if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* check if parent node is null */
	if (parent == NULL)
		return (NULL);
	/* create node */
	binary_tree_t *newnode;
	/* allocate memory */
	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = newnode;

	parent->left = newnode;

	return (newnode);
}
