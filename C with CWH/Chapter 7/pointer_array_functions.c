#include<stdio.h>

int printArray(int *ptr, int n){
    for(int a=0;a<n;a++){
        printf("The value of the element %d is %d\n",a+1,*(ptr+a));
    }
} 

// int printArray(int ptr[], int n){ 
//     for(int a=0;a<n;a++){
//         printf("The value of the element %d is %d\n",a+1,ptr[]);
//     }
//      ptr[2]=55555;
// }
// ptr this time is an array, ptr ki value lene ke liye ptr[i] kar denge. this one much simpler to understand but dono aane chahiye
// if we change the value of the third element in the array will it chnage in the main array? 
//yes kyuki yaha array k address involved hai.
int main()
{
    int arr[]={22,5785,3634,69,56,3};
    printArray(arr,6);
    // jese hi apan ne pointer = array kar diya to pointer mein array ka address store ho gya,
    // ab agar uski actual value leni hai to * laga do. 
    //next element mein jaane ke liye ptr++ or ptr + a(ka loop incrementing wala)
    return 0;
}