#include<stdio.h>


int main()
{
    FILE *ptr; ptr = fopen("read.txt","r");
    int num[5];

    for(int a=0;a<3;a++){
        fscanf(ptr,"%d",&num[a]);
    }
    
    for(int a=0;a<3;a++){
        printf("%d ",num[a]);
    }
    fclose(ptr);
    return 0;
}