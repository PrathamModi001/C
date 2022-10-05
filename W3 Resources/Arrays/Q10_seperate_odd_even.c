#include<stdio.h>


int main()
{
    int n,b=0,c=0;
    printf("Enter the number of elements in the array: "); scanf("%d",&n);
    int arr[n]; int even[n]; int odd[n]; 

    for(int a=0;a<n;a++){
        printf("Element %d: ",a+1); scanf("%d",&arr[a]);
    }

    for(int a=0;a<n;a++){
            if(arr[a]%2==0){
                even[b] = arr[a];
                b++;
            }
            else{
                odd[c] = arr[a];
                c++;
        }
    }

    printf("The even elements are: ");
    for(int a=0;a<b;a++){
        printf("%d ",even[a]);
    }

    printf("The odd elements are: ");
    for(int a=0;a<c;a++){
        printf("%d ",odd[a]);
    }
    return 0;
}