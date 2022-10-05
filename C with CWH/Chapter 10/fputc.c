#include<stdio.h>


int main()
{
    FILE *ptr;
    char arr[100];
    ptr = fopen("generated_2.txt","w");

    fputc('c',ptr);
    
    return 0;
}