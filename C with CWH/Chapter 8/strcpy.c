#include<stdio.h>
#include <string.h>

int main(){
    char *ptr="randi";
    char arr[1000];
    strcpy(arr,ptr);
    printf("Teri ma hai %s",arr);
    return 0;
}

