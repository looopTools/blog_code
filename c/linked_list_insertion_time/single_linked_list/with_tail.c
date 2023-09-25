#include "list.h"

#include <stdio.h>
#include <errno.h>   
#include <limits.h>
#include <stdlib.h> 

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        puts("You have either provided to few or to many parameters");
    }

    errno = 0;
    
    char* data;
    // Attempt to convert argv[1] to base 10 long
    long input = strtol(argv[1], &data, 10);

    int iterations = 0;
    
    // test if valid integer number
    // Borrowed from: https://stackoverflow.com/a/9748431/936269
    if (errno != 0 || *data != '\0' || input > INT_MAX || input < INT_MIN)
    {
        puts("Either you did not provide a natural number or the number is outside the bounds of integers");
    }
    else
    {
        iterations = input;
    }
    
    struct list* list = list_construct();

    for (int i = 0; i < iterations; ++i)
    {
        add_element_with_tail(list, i);
    }

    print_list(list);
}
