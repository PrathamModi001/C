#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code; float salary; char name[15];
}emp;

int main()
{
    emp e1 = {101,69.69,"Harry"};
    printf("The code of the employee is: %d\n\n",e1.code); 
    printf("The salary of the employee is: %.2f\n\n",e1.salary); 
    printf("The name of the employee is: %s\n\n",e1.name); 
    return 0;
}