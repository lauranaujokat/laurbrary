#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct linked_list {
    struct linked_list* next;
    int item;
} linked_list;


linked_list* linked_list_append(linked_list* linked_list, int item);
void linked_list_init(linked_list* pointer, int item);
#endif
