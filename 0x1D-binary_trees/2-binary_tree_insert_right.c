#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right child
 * @parent: pointer to parent node
 * @value: value to add to right child
 *
 * Return: pointer to right child or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* create newnode */
	binary_tree_t *newnode;
	/* allocate memory */
	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	/* check malloc failure */
	if (newnode == NULL)
		return (NULL);
	/* assign values */
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = newnode;

	parent->right = newnode;

	return (newnode);
}
