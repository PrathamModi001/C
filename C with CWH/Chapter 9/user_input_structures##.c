#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code; float salary; char name[15];
}emp; 

int main()
{
    emp e1;
    printf("Enter the name of the employee: "); scanf("%s",&e1.name);
    printf("Enter the code: "); scanf("%d",&e1.code);
    printf("Enter the salary: "); scanf("%f",&e1.salary);
    
    printf("\n\n");
    emp e2;
    printf("Enter the name of the employee: "); scanf("%s",&e2.name);
    printf("Enter the code: "); scanf("%d",&e2.code);
    printf("Enter the salary: "); scanf("%f",&e2.salary);

    printf("\n\n");
    emp e3;
    printf("Enter the name of the employee: "); scanf("%s",&e3.name);
    printf("Enter the code: "); scanf("%d",&e3.code);
    printf("Enter the salary: "); scanf("%f",&e3.salary);
    return 0;
}