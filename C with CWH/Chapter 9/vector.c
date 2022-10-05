#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x; int y;
}vec;

int main()
{
    vec v1,v2;
    v1.x = 6; v1.y = 9;
    v2.x = 1; v2.y = 3;

    printf("Vector 1:\nX Dimension is %d and Y dimension is %d",v1.x,v1.y);

    printf("\n\nVector 2:\nX Dimension is %d and Y dimension is %d",v2.x,v2.y);
    return 0;
}