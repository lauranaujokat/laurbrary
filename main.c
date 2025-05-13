#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "files.h"

void test() {
    vector vector;
    vector_init(&vector);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_add_item(&vector, 11);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_add_item(&vector, 12);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_add_item(&vector, 13);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_add_item(&vector, 14);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_add_item(&vector, 15);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_add_item(&vector, 16);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    for (int i = 0; i < vector.items; i++) {
        printf("Item %d: %d\n", i, vector.array[i]);
    }
    vector_pop(&vector);
    vector_pop(&vector);
    vector_pop(&vector);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    for (int i = 0; i < vector.items; i++) {
        printf("Item %d: %d\n", i, vector.array[i]);
    }
    vector_pop(&vector);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_pop(&vector);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
    vector_pop(&vector);
    printf("\nSize: %d\nItem count: %d\nFirst Item: %d\n\n", vector.size,
           vector.items, vector.array[0]);
}
int main() {

    // test();
    file_load("./.clang-format");
    file_append("test", 4*sizeof(char), "./.clang-format");
    return 0;
}
