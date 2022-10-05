#include<stdio.h>


int main()
{
    char arr[100]; char *ptr = arr;
    printf("Input the string: "); gets(arr); puts(arr);
    printf("\nThe characters of the string seperated are: ");
    while(*ptr!='\0'){
        printf("%c ",*ptr); ptr++;
    }
    
    return 0;
}