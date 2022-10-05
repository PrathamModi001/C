#include<stdio.h>

int main()
{
    int length, breadth;

    printf("\n The length of the rectangle is: \n");
    scanf("%d", &length);
    printf("The breadth of the rectangle is: \n");
    scanf("%d", &breadth);

    printf("The area of the recatngle is: %d \n", length*breadth);
    return 0;
}