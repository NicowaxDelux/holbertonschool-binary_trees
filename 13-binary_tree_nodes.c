#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_nodes - function that counts the nodes with
  * at least 1 child in a binary tree
  *
  * @tree: s a pointer to the root node of the tree to
  * count the number of nodes
  *
  * Return: return count nodes
  *
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		count += 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
