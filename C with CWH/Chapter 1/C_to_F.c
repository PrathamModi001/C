#include<stdio.h>

int main()
{
    float centigrade, fahrenheit;

    printf("Temperature in Centigrade:\n");
    scanf("%f",&centigrade);
    fahrenheit = (centigrade*9/5) + 32;
    printf("\nThe corresponding temperature in fahrenheit is: \n%f",fahrenheit);
    return 0;
}