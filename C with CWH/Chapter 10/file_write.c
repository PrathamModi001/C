#include<stdio.h>


int main()
{
    int num;
    printf("Enter the number: "); scanf("%d",&num);
    FILE *ptr;
    ptr = fopen("AutoGen","w");
    fprintf(ptr,"The number is: %d",num);
    fclose(ptr);
    
    return 0;
}