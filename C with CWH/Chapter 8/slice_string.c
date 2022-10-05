#include<stdio.h>
void slice(char *arr,int m,int n){
    int i=0;
    while((i+m)<=n){
        arr[i] = arr[i+m];
        i++;
    }
    arr[i] = '\0';
}

int main()
{
    char arr[] = "MotherFucker";
    slice(arr,6,11);
    printf("%s",arr);
    return 0;
}