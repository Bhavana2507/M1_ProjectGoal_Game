/**
 * @file tictactoe.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<string.h>
#include "tictactoe.h"


  
int result(char XO[])
{
    if (XO[1] == XO[2] && XO[2] == XO[3])
        return 1;
        
    else if (XO[4] == XO[5] && XO[5] == XO[6])
        return 1;
        
    else if (XO[7] == XO[8] && XO[8] == XO[9])
        return 1;
        
    else if (XO[1] == XO[4] && XO[4] == XO[7])
        return 1;
        
    else if (XO[2] == XO[5] && XO[5] == XO[8])
        return 1;
        
    else if (XO[3] == XO[6] && XO[6] == XO[9])
        return 1;
        
    else if (XO[1] == XO[5] && XO[5] == XO[9])
        return 1;
        
    else if (XO[3] == XO[5] && XO[5] == XO[7])
        return 1;
        
    else if (XO[1] != '1' && XO[2] != '2' && XO[3] != '3' &&
        XO[4] != '4' && XO[5] != '5' && XO[6] != '6' && XO[7] 
        != '7' && XO[8] != '8' && XO[9] != '9')

        return 0;
    else
        return  - 1;
}

void grid(char XO[])
{
    printf("\n\n\tWELCOME TO THE GAME\n");
    printf("\n\tThe rules are simple here\n");
    printf("\n\tEvery player will take a simultaneous chance and the person to place all three inputs in a single row wins\n");
    printf("\n\nPlayer 1 -> (X)  -  Player 2 -> (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", XO[1], XO[2], XO[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", XO[4], XO[5], XO[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", XO[7], XO[8], XO[9]);

    printf("     |     |     \n\n");
}



int check_draw(int num)
{
    if(num > 9)
    {
        printf("\n\n Game is Draw");
        getchar();
        return 0;
    }
    return 1;
}
