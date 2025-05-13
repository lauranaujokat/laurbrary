#include <stdlib.h>
#include "vector.h"


void vector_init(vector* vector) {
    int default_size = 16;
    vector->array = malloc(default_size * sizeof(int));
    vector->items = 0;
    vector->size = default_size;
};

void vector_add_item(vector* vector, int item) {
    int* array = vector->array;
    if (vector->size < vector->items + 1) {
        vector->size = vector->items * 2;
        array = realloc(array, vector->size);
    }
    array[vector->items] = item;
    vector->items++;
};
void vector_pop(vector* vector) {
    if (vector->items == 0) {
        return;
    };
    vector->items--;
    if ((vector->items <= vector->size / 4) && vector->size > 16) {
        vector->size = vector->items * 2;
        vector->array = realloc(vector->array, vector->size * sizeof(int));
    };
}

