#include<stdio.h>
#include<string.h>


int main()
{
    char *ptr="MAA KI CHUT";
    char arr[] = "Teri ";
    strcat(arr,ptr);
    printf("%s",arr);
    return 0;
}