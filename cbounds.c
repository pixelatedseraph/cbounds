#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "cbounds.h"

i_array* c ;
i_array a;


void ckstrfun(size_t size){
    c->size = size;
    c-> arr = safearray(c->size);
}

int* safearray(size_t size){
    return malloc(sizeof(size));
}

void at(int idx){
    if (idx > a.size -1){
        printf("Fatal ERROR - IOB Error");
        return;
    }
    printf("%d",a.arr[idx]);
}
