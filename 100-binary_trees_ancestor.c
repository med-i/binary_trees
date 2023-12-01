#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer tothe second node.
 *
 * Return: A pointer to the lowest common ancestor, otherwise NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t const *temp;

	if (!first || !second)
		return (NULL);

	while (first)
	{
		temp = second;
		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		}
		first = first->parent;
	}

	return (NULL);
}
