/**
 * @file example.c
 * @brief A simple linked list implementation in C.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Node structure for a linked list.
 */
struct Node {
    int data;               ///< Data value of the node
    struct Node *next;      ///< Pointer to the next node
};

/**
 * Creates a new node.
 * @param data The data to store in the node.
 * @return A pointer to the newly created node.
 */
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

