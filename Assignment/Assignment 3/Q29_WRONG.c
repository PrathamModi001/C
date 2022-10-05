#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100]; int temp;
    printf("Enter the string: "); gets(arr);
    int l = strlen(arr);

    for(int a=0;a<l;a++){
        if(arr[a]==' '){
            arr[a] = arr[a+1];
        }
    }
    
    printf("The string after removing the spaces has become: \n%s",arr);
    return 0;
}