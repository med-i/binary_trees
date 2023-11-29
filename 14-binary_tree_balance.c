#include "binary_trees.h"

/**
 * binary_tree_full_height - Measures the height of a binary tree,
 * including leafs.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The tree's height, otherwise 0.
 */
size_t binary_tree_full_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = 1 + binary_tree_full_height(tree->left);
	right_height = 1 + binary_tree_full_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance, otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_full_height(tree->left);
	right_height = binary_tree_full_height(tree->right);

	return (left_height - right_height);
}
