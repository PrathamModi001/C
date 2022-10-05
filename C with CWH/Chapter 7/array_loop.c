#include<stdio.h>


int main()
{
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks of the student %d: \n",i+1); scanf("%d",&marks[i]);
    }

    printf("\n\n\tThe marks entered are as follows: ");

    for(int i=0;i<5;i++){
        printf("%d  ",marks[i]);
    }
    return 0;
}