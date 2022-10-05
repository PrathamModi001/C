#include<stdio.h>
#include<string.h>


int main()
{
    char arr1[15],arr2[15],arr3[15]; int k=0;
    printf("Enter the first string: "); gets(arr1);
    printf("Enter the second string: "); gets(arr2);
    
    for(int a=0;arr1[a]!='\0';a++){
        arr3[k] = arr1[a];
        k++;
    }
    for(int a=0;arr2[a]!='\0';a++){
        arr3[k] = arr2[a];
        k++;
    }
    arr3[k]='\0';
    printf("The concatenated string is: %s",arr3);
    return 0;
}