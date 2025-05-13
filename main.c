#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "linkedlist.h"
#include "files.h"

int main() {
    linked_list* ll = malloc(sizeof(linked_list));
    linked_list_init(ll, 10);
    linked_list* head = ll;

    vector* vec = malloc(sizeof(vector));
    vector_init(vec);
    // for (int i = 0; i < 100000000; i++) {
    //     head = linked_list_append(head, i);
    // }
    for (size_t i = 0; i < 1000000000; i++) {
        vector_add_item(vec, i);
    }


    // test();
    // file_load("./.clang-format");
    // file_append("test", 4*sizeof(char), "./.clang-format");
    return 0;
}
