#include<stdio.h>


int main()
{
    char arr1[] = "TOP OF THE MORNIN TO YA LADDIES";
    char arr2[100];
    int a;
    printf("First Array: %s",arr1);

    for(int a=0;arr1[a]!='\0';a++){
        arr2[a] = arr1[a];
    }
    arr2[a] ='\0';
    printf("\nSecond Array: %s",arr2);
    return 0;
}
// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     char arr1[] = "Ayyo whats poopin my gamer";
//     char arr2[100];
//     strcpy(arr2,arr1); 
//     printf("%s",arr2);
//     return 0;
// }