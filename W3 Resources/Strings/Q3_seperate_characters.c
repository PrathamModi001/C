#include<stdio.h>


int main()
{
    char arr[100];
    printf("Enter the string: "); gets(arr); puts(arr);
    printf("The characters seperated is shown by: \n\n");
    
    for(int a=0;arr[a]!='\0';a++){
        printf("%c ",arr[a]);
    }
    return 0;
}