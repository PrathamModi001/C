#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    printf("Enter the string: "); gets(arr); puts(arr);
    printf("The characters seperated is shown by: \n\n");

    int length=strlen(arr);

    for(int a=length;a>=0;a--){
        printf("%c ",arr[a]);
    }
    return 0;
}