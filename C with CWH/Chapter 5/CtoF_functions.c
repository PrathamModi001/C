#include<stdio.h>
float cf(int a);

int main()
{
    int t; float final;

    printf("Enter the temperature (in degree C): "); scanf("%d",&t);
    printf("\n\nThe respective temperature in degree fahrenheit is: %f",cf(t));
    return 0;
}

float cf(int x){
    float result = (x*(9/5.0) + 32);
    return result;
}