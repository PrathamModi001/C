#include<stdio.h>


int main()
{
    int num;
    FILE *ptr; ptr = fopen("double.txt","r");
    
    fscanf(ptr,"%d",&num);
    fclose(ptr);

    FILE *ptr2; ptr2 = fopen("double.txt","w");

    fprintf(ptr2,"%d",num*2);
    fclose(ptr2);
    
    return 0;
}