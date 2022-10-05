#include<stdio.h>


int main()
{
    int arr[10];
    for(int a=0;a<10;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    for(int a=0;a<10;a++){
        printf("Element - %d : %d\n",a+1,arr[a]);
    }
    return 0;
}