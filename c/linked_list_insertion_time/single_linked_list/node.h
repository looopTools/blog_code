//
// File node.h
// Contains definition for the node structure and functions for creating and freeing a node

#ifndef NODE_H
#define NODE_H

struct node
{
    int value;
    struct node* next;
};

struct node* node_construct(int value);
void node_destroy(struct node* node);

#endif /* NODE_H */
