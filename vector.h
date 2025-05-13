#ifndef VECTOR_H
#define VECTOR_H
#include <stddef.h>
typedef struct vector_struct {
  size_t *array;
  size_t items;
  size_t size;
} vector;

void vector_init(vector *vector);
void vector_add_item(vector *vector, size_t item);
void vector_pop(vector* vector);
#endif          
