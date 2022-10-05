#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[100],arr2[100]; int same=1;
    printf("Enter the first string: "); gets(arr1); puts(arr1);
    printf("Enter the second string: "); gets(arr2); puts(arr2);

    int l1 = strlen(arr1);
    int l2 = strlen(arr2);

    if(l1!=l2){
        printf("Strings are not equal!");
    }
    else{
        for(int a=0;arr1[a]!='\0';a++){
            if(arr1[a]==arr2[a]){
                same=1;
            }
            else{
                same=0;
                break;
            }
        }
    }

    if(same){
        printf("Strings are equal!");
    }
    else{
        printf("Strings are not equal!");
    }
    return 0;
}