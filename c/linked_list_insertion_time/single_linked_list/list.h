//
// File node.h
// Contains definition for the node structure and functions for creating and freeing a node

#ifndef LIST_H
#define LIST_H


#include <stdlib.h>

#include "node.h"

struct list
{
    size_t size;
    size_t capacity;    
    struct node* head;
    struct node* tail;
};


struct list* list_construct();
struct list* list_construct_with_capascity(size_t capacity);

size_t add_element(struct list* list, int value);
size_t add_element_with_tail(struct list* list, int value);

void print_list(struct list* list);

#endif /* LIST_H */
