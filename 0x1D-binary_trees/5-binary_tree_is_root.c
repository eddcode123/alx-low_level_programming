#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root node
 * @node: node to be checked
 *
 * Return: returns 1 if root node 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* initialize "root" to 1 if node is root node 0 otherwise */
	int root = 0;

	/* check if node is a root node */
	if (node && (node->parent == NULL))
	{
		root = 1;
	}

	return (root);
}
