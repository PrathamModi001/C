#include<stdio.h>
float avg(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("Enter the 3 numbers respectively: \n"); scanf("%d",&a); scanf("%d",&b); scanf("%d",&c);
    printf("\n\nThe average of the following numbers is: %f",avg(a,b,c));
    return 0;
}
float avg(int x,int y,int z){
    float result = (x+y+z)/3.0;
    return result;
}