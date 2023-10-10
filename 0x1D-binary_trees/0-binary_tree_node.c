#include "binary_trees.h"

/**
 * binary_tree_node - creates a parent node of a binary tree
 * @parent: parent node
 * @value: data to store in created node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* create a node */
	binary_tree_t *newnode;
	/* allocate memory */
	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	/* check malloc fail */
	if (newnode == NULL)
		return (NULL);
	/* create parent */
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
