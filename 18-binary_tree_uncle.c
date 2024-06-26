#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle node of a given node.
 * The uncle node is the sibling of the parent node of the given node.
 *
 * @node: The node to be evaluated.
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right != NULL &&
	    node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->left != NULL &&
		 node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
