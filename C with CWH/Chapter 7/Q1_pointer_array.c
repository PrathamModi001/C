#include<stdio.h>


int main()
{
    int times=0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    while (times<10){
        printf("%d ",*(ptr));
        ptr++;
        times++;
    }
    ptr = arr;// getting the value of ptr back to 0 from 10
    printf("\n\nThe 3rd element of the array is: %d",*(ptr+2));
    return 0;
}