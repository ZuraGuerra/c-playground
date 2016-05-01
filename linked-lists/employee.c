#include "employee.h"
#include <stdlib.h>

Employee *createEmployee (int age, float salary) {
    Employee *instance = (Employee *) malloc(sizeof(Employee));
   
    instance->age = age;
    instance->salary = salary;
    instance->next = NULL;

    return instance;
}
