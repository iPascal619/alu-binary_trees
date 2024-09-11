#include "binary_trees.h"
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

if (tree->left == NULL && tree->right == NULL)
return (0);

return (1 + tallest_tree(left_height, right_height));
}

/**
 * tallest_tree - Compares the height of a binary tree
 * @a: first number
 * @b: second number
 * Return: The tallest tree
 */

int tallest_tree(int a, int b)
{
return (a > b ? a : b);
}