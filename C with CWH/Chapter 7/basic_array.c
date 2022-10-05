#include<stdio.h>


int main()
{
    int marks[5];
    printf("Enter the marks of the student: \n"); scanf("%d",&marks[0]);
    printf("Enter the marks of the student: \n"); scanf("%d",&marks[1]);
    printf("Enter the marks of the student: \n"); scanf("%d",&marks[2]);
    printf("Enter the marks of the student: \n"); scanf("%d",&marks[3]);
    printf("Enter the marks of the student: \n"); scanf("%d",&marks[4]);

    printf("\n\n\tThe marks entered are as follows: \n\n%d  %d  %d  %d  and %d",
        marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}