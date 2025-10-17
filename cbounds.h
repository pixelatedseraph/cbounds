#ifndef CBOUNDS_H
#define CBOUNDS_H

#include <stddef.h>

typedef struct i_array
{
    size_t size;
    int* arr;
} i_array;
void ckstrfun(size_t );
int* safearray(size_t);
void at(int);
#endif

