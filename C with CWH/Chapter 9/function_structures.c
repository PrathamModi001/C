#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code; float salary; char name[15];
}emp;

void show(emp e1){
    printf("The Code of employee is: %d\n", e1.code);
    printf("The Salary of employee is: %.2f\n", e1.salary);
    printf("The Name of employee is: %s\n", e1.name);
}

int main()
{
    emp e; emp *ptr; ptr=&e;
    ptr->code = 101; ptr->salary = 69.69; strcpy(ptr->name,"Harry");

    show(e);
    return 0;
}