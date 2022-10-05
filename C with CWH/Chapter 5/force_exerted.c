#include<stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("Enter the mass of the object to be calculated: "); scanf("%f",&m);
    float f= force(m);
    printf("\n\nThe force of attraction acting on the body is: %f",f);
    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}