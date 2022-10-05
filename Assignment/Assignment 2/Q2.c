#include<stdio.h>


int main()
{
    int n;
    printf("Enter the size of the array: "); scanf("%d",&n);
    char arr[n];
    printf("Input %d elements in the array: \n",n);

    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    printf("The values stored into the array are: ");
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
    
    printf("\n\nThe values stored into the array in reverse are: ");
    for(int a=n-1;a>=0;a--){
        printf("%d ",arr[a]);
    }
    return 0;
}