#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree from a given node.
 * The size of a tree is the total number of nodes including the root.
 *
 * @tree: Pointer to the root node of the tree to measure from.
 *
 * Return: Size of the tree from the given node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}
