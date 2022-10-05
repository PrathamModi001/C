#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100];
    printf("input the string: "); gets(arr);
    int l = strlen(arr),count=0,t=0,h=0,e=0,space=0;


    for(int a=0;a<l;a++){
        t = (arr[a]=='t' || arr[a]=='T');
        h = (arr[a+1]=='h' || arr[a+1]=='H');
        e = (arr[a+2]=='e' || arr[a+2]=='E');

        if((t && h && e)==1){
            count++;
        }
    }
    printf("\n\nThe number of time 'the' appears is: %d",count);
    return 0;
}