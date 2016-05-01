#include "list.h"
#include "employee.h"
#include <stdlib.h>
#include <stdio.h>

int main () {
    List *linked_list = createList();

    insertEmployee(&linked_list, 20, 50.0f);
    insertEmployee(&linked_list, 19, 50.f);

    printList(&linked_list);

    free(linked_list->head->next);
    free(linked_list->head);
    free(linked_list);

    return 0;
}