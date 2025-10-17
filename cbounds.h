#ifndef CBOUNDS_H
#define CBOUNDS_H

#include <stddef.h>

typedef struct i_array
{
    size_t size;
    int* arr;
} i_array;
i_array* ckstrfun(size_t );
int* safearray(size_t);
void get(int,i_array*);
void push(int, int , i_array*);
#endif

