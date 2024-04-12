#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in the tree.
 *
 * @tree: The tree to be evaluated.
 *
 * Return: The total number of leaf nodes in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
