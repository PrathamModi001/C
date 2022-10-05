#include<stdio.h>
#include<string.h>


int main()
{
    int equal=0;
    char arr1[15],arr2[15];
    printf("Input the first string: "); gets(arr1); puts(arr1);
    printf("Input the second string: "); gets(arr2); puts(arr2);

    int len1 = strlen(arr1);
    int len2 = strlen(arr2);

    if(len1!=len2){
        printf("\nThe strings are not equal!");
    }
    
    else{
        for(int a=0;a<len1;a++){
            if(arr1[a]!=arr2[a]){
                equal=0; break;
            }
            else{
                equal=1;
            }
        }

        if(equal==0){
            printf("\nThe strings are not equal!");
        }
        else{
            printf("\nThe strings are equal");
        }
    }
    return 0;
}