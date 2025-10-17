#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "cbounds.h"

i_array* ckstrfun(size_t size){
    i_array* c = malloc(sizeof(i_array));
    c->size = size;
    c-> arr = safearray(c->size);
    return c;
}

int* safearray(size_t size){
    return malloc(sizeof(size));
}

void get(int idx, i_array* i){
    if (idx > i->size - 1){
        printf("Fatal ERROR - IOB Error");
        return;
    }
    printf("%d",i->arr[idx]);
}

void push(int idx, int val ,i_array* i){
      if (idx > i->size - 1){
        printf("Fatal ERROR - IOB Error");
        return;
    }
    i->arr[idx] = val;
}

void pop(int idx, i_array* i){
         if (idx > i->size - 1){
        printf("Fatal ERROR - IOB Error");
        return;
    }
    i->arr[idx] ;
}