#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in the tree that have at least one child.
 *
 * @tree: The tree to be evaluated.
 *
 * Return: The number of nodes in the tree that have at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
