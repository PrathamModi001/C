#include <stdio.h>

void main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;
	
	
    printf("\n\nCount frequency of each element of an array:\n");
    printf("------------------------------------------------\n");	

    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
            {
	    printf("element - %d : ",i);
	    scanf("%d",&arr1[i]);
		fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;//har loop ke baad count = 1.
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;//if arr[i]==arr[j] count increase==>2.
                fr1[j] = 0;// and fr[j] (original ke next dupliate elements) will be assigned 0.
            }
        }

        if(fr1[i]!=0)//if arr[i]!=arr[j] then fr[i] ki value has remained -1.
        {            //usko change karke freq ki value 1 karni hogi that is ctr.
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}