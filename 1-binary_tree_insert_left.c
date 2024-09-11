#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the parent node
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)  // Check if parent is NULL
        return (NULL);

    new_node = binary_tree_node(parent, value);  // Create new node
    if (new_node == NULL)  // Check for memory allocation failure
        return (NULL);

    if (parent->left != NULL)  // If parent already has a left child
    {
        new_node->left = parent->left;  // Link the existing left child to the new node
        parent->left->parent = new_node; // Update the parent of the old left child
    }

    parent->left = new_node;  // Set the new node as the left child of the parent

    return (new_node);  // Return the new node
}