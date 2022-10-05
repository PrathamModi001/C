#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100]; int b;
    printf("Enter the string: "); gets(arr);
    int l = strlen(arr);

    for(int a=0;a<l;a++){
        while(!((arr[a]>='a' && arr[a]<='z') || (arr[a]>='A' && arr[a]<='Z') || (arr[a] == '\0'))){
            for(int b=a;b<l;b++){
                arr[b] = arr[b+1];
            }
            arr[b]='\0';
        }
    }

    printf("The modified string is: %s",arr);
    return 0;
}