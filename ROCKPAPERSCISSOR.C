       // ROCK PAPER SCISSOR 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int rockPaperScissor(char you ,char comp){

    //return -1 if loose
    //return 1 if win
    //return 0 if draw
    if(you == comp){
        return 0;
    }


    //cases used ----
    //rock paper     (ROCK - R)
    //paper rock     (SCISSOR - S)
    //scissor rock   (PAPER - P)
    //rock scissor
    //paper scissor
    //scissor paper

    if(you == 'R' && comp == 'P'){
        return -1;
    }
    else if(you =='P' && comp == 'R'){
        return 1;
    }

    if(you =='S' && comp == 'R'){
        return -1;
    }
    else if(you =='R' && comp == 'S'){
        return 1;
    }

     if(you =='P' && comp == 'S'){
        return -1;
    }
    else if(you =='S' && comp == 'P'){
        return 1;
    }
    return 0;

}

int main()
{
    char you,comp;
    srand(time(0));
    int number = rand()%100+1;

    if(number<33){
        comp = 'R';
    }
    else if(number > 33 && number <99){
        comp = 'P';
    }
    else{
        comp = 'S';
    }
    printf("WHAT YOU CHOOSE !!!\n");
    scanf("%c",&you);
    int result = rockPaperScissor(you , comp);
    if(result == 1){
        printf("YOU WIN!!\n");
    }
    else if(result == -1)
    {
        printf("YOU LOOSE!!\n");
    }
    else
    {
        printf("DRAW!!!\n");
    }
    printf("You choose %c and computer choose %c:",you,comp);
    return 0;
}