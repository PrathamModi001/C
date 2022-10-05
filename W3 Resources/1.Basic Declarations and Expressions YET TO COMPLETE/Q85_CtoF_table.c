#include<stdio.h>

int main()
{
    int f;
    float c;
    printf("Celsius\tto\tFahrenheit\n");
    printf("======================================================================\n");
    for (f=0;f<=150;f+=10){
        c=(float)(f-32)*5/9;
        printf("%d\t \t%.2f\n",f,c);
    }
    return 0;
}