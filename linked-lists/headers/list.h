#include "employee.h"

#ifndef __LIST_H__
#define __LIST_H__

struct list {
    int size;
    Employee *head;
};

typedef struct list List;

// Factory function
List *createList (void);
void insertEmployee(List **, int, float);
void printList (List ** list);

#endif