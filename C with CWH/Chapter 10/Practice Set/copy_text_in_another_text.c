#include<stdio.h>


int main()
{
    FILE *ptr; ptr = fopen("Source.txt","r");
    FILE *ptr2; ptr2 = fopen("Copy.txt","w");
    
    char c = fgetc(ptr);
    while(c!=EOF){
        fputc(c,ptr2);
        c = fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}