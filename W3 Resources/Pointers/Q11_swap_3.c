#include<stdio.h>
void swap(int *a,int *b,int*c);

int main()
{
    int x,y,z; int*a=&x; int*b=&y; int*c=&z;
    printf("Enter the first number: "); scanf("%d",&x);
    printf("\nEnter the second number: "); scanf("%d",&y);
    printf("\nEnter the third number: "); scanf("%d",&z);
    swap(a,b,c); // or you can do swap(&x,&y,&z); //
    printf("\nThe values of the number after the swap is : \n\n1st:%d  2nd:%d  3rd:%d",x,y,z);
    return 0;
}

void swap(int *a,int *b,int *c){
    int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
}