#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: root of binary tree
 *
 * Return: No return value
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* check if Root is NULL */
	if (tree == NULL)
		return;

	/* call binary_tree_delete recusivly to delete all left children */
	binary_tree_delete(tree->left);
	/* call binary_tree_delete recusivly to delete all right children */
	binary_tree_delete(tree->right);
	/* free tree */
	free(tree);
}
