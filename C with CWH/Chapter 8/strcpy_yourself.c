#include<stdio.h>
void my_strcpy(char *arr1,char *arr2){
    int i=0;
    while(arr2[i]!='\0'){
        arr1[i] = arr2[i];
        i++;
    }
    arr1[i] = '\0'; 
}

int main()
{
    char arr1[] = "MotherFucker";
    char arr2[] = "MadarChod";
    my_strcpy(arr1,arr2);
    printf("%s",arr1);
    return 0;
}