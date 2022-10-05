#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n,*ptr; 
    printf("Enter the size of the array: "); scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));

    printf("Enter the elements of the array: \n"); 
    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&ptr[a]);
    }

    printf("\nThe elements in the array are: \n");
    for(int a=0;a<n;a++){
        printf("Element %d - %d\n",a+1,ptr[a]);
    }
    
    return 0;
}