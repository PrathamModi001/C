#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char arr[100]; int l=0;
    printf("Enter the string: "); gets(arr);
    l = strlen(arr);

    for(int a=0;a<l;a++){
        if(isupper(arr[a])){
            arr[a] = arr[a] + 32;
        }
        else if(islower(arr[a])){
            arr[a] = arr[a] - 32;
        }
    }
    printf("The changed string is given by: \n%s",arr);
    return 0;
}