#ifndef VECTOR_H
#define VECTOR_H

typedef struct vector_struct {
  int *array;
  int items;
  int size;
} vector;

void vector_init(vector *vector);
void vector_add_item(vector *vector, int item);
void vector_pop(vector* vector);
#endif          
