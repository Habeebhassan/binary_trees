#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * A binary tree is considered perfect if all levels are fully filled except
 * possibly the last level, which is filled from left to right.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, size, pow;

	if (tree == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left);
	right = custom_binary_tree_height(tree->right);
	size = binary_tree_size(tree);

	if (size == 1)
		return (1);
	if (left >= 0 && right >= 0 && left == right)
	{
		pow = get_power(left + 1);

		if (pow - 1 == size)
			return (1);
	}

	return (0);
}

/**
 * custom_binary_tree_height - Measures the height of a binary tree from a given node.
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

/**
 * binary_tree_size - Measures the size of a binary tree from a given node.
 *
 * @tree: Root node of the tree to measure from.
 *
 * Return: Size of the tree from the given node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}

/**
 * get_power - Gets the power of 2 for a given number.
 *
 * @exp: Exponent.
 *
 * Return: Power of 2 for the given exponent.
 */
int get_power(int exp)
{
	int pow, i;

	for (i = 0, pow = 1; i <= exp; i++)
		pow *= 2;

	return (pow);
}
