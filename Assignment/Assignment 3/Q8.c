#include<stdio.h>
#include<string.h>


int main()
{
    char arr1[15],arr2[15];
    printf("Enter the first string: "); gets(arr1); puts(arr1);
    strcpy(arr2,arr1);
    printf("\n\nThe string string copied from the first is: %s",arr2);
    return 0;
}