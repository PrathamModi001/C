#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    int temp;
    printf("Enter the string to be sorted: "); gets(arr); puts(arr);
    int l=strlen(arr);

    for(int a=0;a<l;a++){
        for(int b=a+1;b<l;b++){
            if(arr[a]>arr[b]){
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }

    printf("The sorted string is: %s",arr);
    return 0;
}