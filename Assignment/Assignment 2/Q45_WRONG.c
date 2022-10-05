#include <stdio.h>

int main()
{
    int sum = 0,minPair1,minPair2;
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);

    // printing the array
    printf("The given array is: \n");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", arr[a]);
    }

    // sorting the array
    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            if (arr[a] > arr[b])
            {
                int temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }

    printf("\n\nThe sorted array will be: \n");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", arr[a]);
    }

    int minSum = arr[0];
    for (int i = 0; i < n;)
    {
        for (int j = n - 1; j < n;)
        {
            if (arr[i] + arr[j] < 0){
                i++;
                sum = arr[i] + arr[j];
                if (minSum < sum){
                    minSum = sum;
                    minPair1 = arr[i];
                    minPair2 = arr[j];
                }
            }

            if (arr[i] + arr[j] > 0){
                j--;
                sum = arr[i] + arr[j];
                if (minSum < sum){
                    minSum = sum;
                    minPair1 = arr[i];
                    minPair2 = arr[j];
                }
            }

            if (arr[i] + arr[j] == 0){
                sum = 0;
                minSum = 0;
                minPair1 = arr[i];
                minPair2 = arr[j]; break;
            }
        }
    }
    printf("\n\nThe pair of elements whose sum is minimum is: %d\n[%d,%d]",sum,minPair1,minPair2);
    
    
    return 0;
}