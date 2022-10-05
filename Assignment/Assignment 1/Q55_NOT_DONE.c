#include<stdio.h>


int main()
{
    int n,a,b,prime=1;
    printf("Input the number: "); scanf("%d",&n);
    
    for(a=2;a<=n;a++){
        if(n%a==0){
            prime=0;
            break;
        }
        if (n%a!=0){
            if(n%(n-a)==0){
                prime=0;
            }
            else{
                n-a==b;

                printf("%d = %d + %d",n,a,b);
            }
        }
    }


    return 0;
}