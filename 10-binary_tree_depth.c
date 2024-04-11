#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_depth - function that measures the
  * depth of a node in a binary tree
  *
  * @tree: is a pointer to the node to measure the depth
  *
  * Return: return depth
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
