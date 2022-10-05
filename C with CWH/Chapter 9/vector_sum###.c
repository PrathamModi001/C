#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x,y;
}vec;

vec sumVector(vec v1,vec v2){
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
};

int main()
{
    vec v1,v2,sum;
    printf("Enter the values of the vector v1: "); scanf("%d",&v1.x); scanf("%d",&v1.y);
    printf("Enter the values of the vector v2: "); scanf("%d",&v2.x); scanf("%d",&v2.y);

    printf("\n\nVector 1:\nX dimension is %d and Y dimension is %d",v1.x,v1.y);
    printf("\n\nVector 2:\nX dimension is %d and Y dimension is %d",v2.x,v2.y);
    
    sum = sumVector(v1,v2);
    printf("\n\n\nThe sum of the X dimensions is %d and the sum of y dimension is %d",sum.x,sum.y);
    return 0;
}