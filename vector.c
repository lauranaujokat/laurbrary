#include "vector.h"
#include <stdlib.h>

void vector_init(vector* vector) {
    size_t default_size = 16;
    vector->array = malloc(default_size * sizeof(size_t));
    vector->items = 0;
    vector->size = default_size;
};

void vector_add_item(vector* vector, size_t item) {
    if (vector->size == vector->items) {
        vector->size = vector->items * 2;
        vector->array = realloc(vector->array, vector->size * sizeof(size_t));
    }
    vector->array[vector->items] = item;
    vector->items++;
};
void vector_pop(vector* vector) {
    if (vector->items == 0) {
        return;
    };
    vector->items--;
    if ((vector->items <= vector->size / 4) && vector->size > 16) {
        vector->size = vector->items * 2;
        vector->array = realloc(vector->array, vector->size * sizeof(size_t));
    };
}
