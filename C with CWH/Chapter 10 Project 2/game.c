#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you,char comp){
    if(you==comp){
        return 0;
    }
    
    else if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }

    else if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }

    else if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
}

int main()
{
    char you,comp;

    printf("\nSNAKE, WATER AND GUN! PLAY THE GAME NOW!\n=======================================================================\n\n\n");

    printf("Commands:\n's' for Snake, 'w' for Water and 'g' for Gun\n");
    printf("Choose: "); scanf("%c",&you);

    srand(time(0));
    int number = rand() % 100 + 1;
    if(number <33){
        comp = 's';
    }
    else if(number >33 && number <66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }

    printf("\n\nYou Chose %c and the Computer chose %c.\n",you,comp);
    int res = snakeWaterGun(you,comp);
    
    if(res==0){
        printf("Game Draw!\n");
    }
    else if(res==1){
        printf("You Win!\n");
    }
    else{
        printf("You Lose! Better Luck Next Time :)");
    }
    return 0;
}