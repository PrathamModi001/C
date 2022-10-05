#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100];
    printf("Input the string: "); gets(arr); puts(arr);
    int len = strlen(arr);

    printf("%d\n\n\n",len);
    printf("The array in reverse order is: \n");
    for(int a=len;a>=0;a--){
        printf("%c",arr[a]);
    }
    return 0;
}