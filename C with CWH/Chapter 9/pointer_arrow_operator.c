#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code; float salary; char name[15];
}emp;

int main()
{
    emp e1; emp *ptr; ptr=&e1;

    ptr->code = 101; printf("Code of the employee is: %d\n",e1.code);

    ptr->salary = 69.69; printf("Salary of the employee is: %.2f",e1.salary);
    return 0;
}