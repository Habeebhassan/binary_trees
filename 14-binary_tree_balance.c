#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * Balance factor is calculated as the difference between the height of the
 * left subtree and the height of the right subtree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Balance factor (left height minus right height),
 *         or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left);
	right = custom_binary_tree_height(tree->right);

	return (left - right);
}

/**
 * custom_binary_tree_height - Measures the height of a binary tree from a given node.
 * This function is edited to work with the balance factor function.
 *
 * @tree: Pointer to the node of the tree to measure.
 *
 * Return: Height of the tree, or -1 if the node is NULL.
 */
int custom_binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left) + 1;
	right = custom_binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
