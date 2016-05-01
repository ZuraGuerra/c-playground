#include "list.h"
#include "employee.h"
#include <stdlib.h>
#include <stdio.h>

List *createList (void) {
    List *instance = (List *) malloc(sizeof(List));

    instance->size = 0;
    instance->head = NULL;
    
    return instance;
}

void insertEmployee (List ** list, int age, float salary) {
    Employee *current = (*list)->head;
    Employee *predecessor = NULL;
    Employee *temporal = createEmployee(age, salary);

    while (current != NULL && current->age < temporal->age) {
        predecessor = current;
        current = current->next;
    }

    if (predecessor == NULL) {
        temporal->next = (*list)->head;
        (*list)->head = temporal;
    } else {
        predecessor->next = temporal;
        temporal->next = current;
    }

    (*list)->size++;
}

void printList (List ** list) {
    if ((*list)->size == 0) {
        puts("[empty]");
        return;
    }

    Employee *current = (*list)->head;

    while (current != NULL) {
        printf(
            "[%d, %f] -> ",
            current->age,
            current->salary
        );

        current = current->next;
    }

    puts("[empty]");
}