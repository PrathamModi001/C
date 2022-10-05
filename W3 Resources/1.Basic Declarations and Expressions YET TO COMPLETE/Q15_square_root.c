#include<stdio.h>
#include<math.h>
int main()
{
    int x2,x1,y2,y1;
    float distance;
    printf("First x coordinate: \n");
    scanf("%d",&x1);
    printf("Second x coordinate: \n");
    scanf("%d",&x2);
    printf("First y coordinate: \n");
    scanf("%d",&y1);
    printf("Second y coordinate: \n");
    scanf("%d",&y2);

    distance = (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("The distance between two points is given by %f", sqrt(distance));
    return 0;
}