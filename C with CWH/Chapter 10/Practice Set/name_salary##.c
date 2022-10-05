#include<stdio.h>


int main()
{
    int s1,s2; char n1[15],n2[15];
    FILE *ptr; ptr = fopen("Name_Salary.txt","w");
    printf("Name 1: "); scanf("%s",n1); 
    printf("Name 2: "); scanf("%s",n2);

    printf("Salary 1: "); scanf("%d",&s1);
    printf("Salary 2: "); scanf("%d",&s2);

    fprintf(ptr,"%s,%d\n",n1,s1);
    fprintf(ptr,"%s,%d\n",n2,s2);
    fclose(ptr);
    return 0;
}