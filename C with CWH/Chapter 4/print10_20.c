#include <stdio.h>

int main()
{
    int a;

    a = 0;
    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("The value of the a is %d\n", a);
        }
        a++;
    }
    return 0;
}