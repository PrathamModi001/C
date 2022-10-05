#include<stdio.h>

void gm();
void ga();
void gn();

int main()
{
    int a;
    gm();//directly called goodmorning
    return 0;
}
void gm(){
    printf("Good Morning!\n");
    ga();//indirectly called goodafternoon
}
void ga(){
    printf("Good Afternoon!\n");
    gn();//indirectly call kiya
}
void gn(){
    printf("Good Night!\n");
}