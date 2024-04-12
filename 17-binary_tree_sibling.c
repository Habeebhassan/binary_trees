#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * A sibling is a node that shares the same parent as the given node.
 *
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
