#include "linkedlist.h"
#include <stdlib.h>

linked_list* linked_list_append(linked_list* list, int item) {
    linked_list* pointer = malloc(sizeof(linked_list));
    linked_list_init(pointer, item);
    while (list->next != NULL)
        list = list->next;
    list->next = pointer;
    return pointer;
};
int linked_list_get(linked_list* list, int index) {
    for (int i = 0; i < index; i++) {
        list = list-> next;
    }
    return list->item;

}
void linked_list_init(linked_list* pointer, int item) {
    pointer->item = item;
    pointer->next = 0;
};
