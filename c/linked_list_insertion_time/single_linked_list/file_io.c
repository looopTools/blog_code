#include "file_io.h"

#include <stdio.h>
#include <stdlib.h>

void write_result(char* exp_name, int iterations, double time)
{
    FILE* out_file;
    
    out_file = fopen(exp_name, "a");

    if (out_file == NULL)
    {
        printf("File for experiment %s not found\n", exp_name);
        return;
    }
    
    char buffer[sizeof(int) + sizeof(double) + 10];
    sprintf(buffer, "%d,%f", iterations, time);
    fprintf(out_file, "%s\n", buffer);
    
    fclose(out_file);
}
