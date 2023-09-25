#include <stdio.h>

#include "list.h"

struct list* list_construct()
{

    struct list* list = malloc(sizeof(struct list));
    list->size = 0;
    list->capacity = 0;
    list->head = NULL;
    list->tail = NULL;
    return list; 
}

struct list* list_construct_with_capascity(size_t capacity)
{
    struct list* list = list_construct();
    list->capacity = capacity;
    return list;
}

size_t add_element(struct list* list, int value)
{
    if (list->capacity != 0 && list->size == list->capacity)
    {
        return 0;
    }

    if (list->head == NULL)
    {
        list->head = node_construct(value);
    }
    else
    {
        struct node* current = list->head;

        while(current->next != NULL)
        {
            current = current->next;
        }

        current->next = node_construct(value);
    }
    
    list->size = list->size + 1;
    
    return list->size;
}

size_t add_element_with_tail(struct list* list, int value)
{
    if (list->capacity != 0 && list->size == list->capacity)
    {
        return 0;
    }

    if (list->head == NULL)
    {
        list->head = node_construct(value);
        list->tail = list->head;
    }
    else
    {
        list->tail->next = node_construct(value);
        list->tail = list->tail->next;
    }

    list->size = list->size + 1;
    
    return list->size;
}

void print_list(struct list* list)
{
    struct node* current = list->head;

    printf("[");

    for (size_t i = 0; i < list->size - 1; ++i)
    {
        printf("%d, ", current->value);
        current = current->next;
    }

    printf("%d]\n", current->value);
}
