#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100]; int count=0;
    printf("Enter the string: "); gets(arr);
    int l = strlen(arr);
    
    for(int a=0;a<l;a++){
        count=0;
        for(int b=a+1;b<l;b++){
            if(arr[a]==arr[b]){
                count++;
                break;
            }
            printf("The repititive character in the string %s is: %c",arr,arr[a]);
        }
    }

    return 0;
}