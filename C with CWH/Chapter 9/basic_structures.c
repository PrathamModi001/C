#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code; float salary; char name[15];
}emp;

int main()
{
    emp e1;
    e1.code=101; e1.salary=69; strcpy(e1.name,"Harry");
    
    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}