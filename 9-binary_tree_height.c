#include "binary_trees.h"


int max(int a, int b);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (1 + max(left_height, right_height));
}

/**
 * max - Compares two integers
 * @a: first number
 * @b: second number
 * Return: The the larger of the two numbers
 */

int max(int a, int b)
{
return (a > b ? a : b);
}
