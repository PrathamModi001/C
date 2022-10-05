#include<stdio.h>

int main()
{
    int radius, height;

    printf("The radius of the circle is:\n ");
    scanf("%d",&radius);
    printf("The area of the circle is:%f\n", 3.14*radius*radius);
    printf("The height of the cylinder is: \n");
    scanf("%d",&height);
    printf("The volume of this cylinder would be:%f\n", 3.14*radius*radius*height);
    return 0;
}