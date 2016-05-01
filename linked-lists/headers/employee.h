#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

struct employee {
    int age;
    float salary;

    struct employee *next;
};

typedef struct employee Employee;

// Employee's factory function
Employee *createEmployee (int, float);

#endif