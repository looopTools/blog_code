#include <stdlib.h>

#include "node.h"

struct node* node_construct(int value)
{
    struct node* node = malloc(sizeof(struct node));
    node->value = value;
    return node;
}

void node_destroy(struct node* node)
{
    if (node == NULL)
    {
        return;
    }
    node_destroy(node->next);
    free(node);
}
