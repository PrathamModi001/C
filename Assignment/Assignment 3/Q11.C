#include<stdio.h>
#include<string.h>


int main()
{
    char arr[15]; int temp;
    printf("Input the string: "); gets(arr);
    int len = strlen(arr);

    for(int a=0;a<len;a++){
        for(int b=a+1;b<len;b++){
            if(arr[a]>arr[b]){
                int temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    
    printf("\n\nThe string sorted in the ascending order is given by: \n%s",arr);
    return 0;
}