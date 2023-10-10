#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a nodde is a left node
 * @node: node to be checked
 *
 * Return: returns 1 is node is a leaf node and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Initialize 'leaf' to 1 if the node has no left and right children */
	int leaf = 0;

	/* check if node is leaf */
	if (node && ((node->left == NULL) && (node->right == NULL)))
	{
		leaf = 1;
	}

	return (leaf);
}
