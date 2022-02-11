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

char XO[10]={'0','1','2','3','4','5','6','7','8','9'};
int result();
void grid();

int main()
{
    int capt=1, a, opt;
    char point;
    do
    {
    grid();
    capt = (capt%2)?1:2;
    printf("ENTER YOUR CHOICE PLAYER %d: ",capt);
    scanf("%d",&opt);
    point = (capt==2)? 'X' : 'O' ;
    if (opt == 1 && XO[1] == '1')
            XO[1] = point;
            
        else if (opt == 2 && XO[2] == '2')
            XO[2] = point;
            
        else if (opt == 3 && XO[3] == '3')
            XO[3] = point;
            
        else if (opt == 4 && XO[4] == '4')
            XO[4] = point;
            
        else if (opt == 5 && XO[5] == '5')
            XO[5] = point;
            
        else if (opt == 6 && XO[6] == '6')
            XO[6] = point;
            
        else if (opt == 7 && XO[7] == '7')
            XO[7] = point;
            
        else if (opt == 8 && XO[8] == '8')
            XO[8] = point;
            
        else if (opt == 9 && XO[9] == '9')
            XO[9] = point;
        else
        {
            printf("WRONG MOVE");
            capt--;
            getch();
        }    
        a=result();
        capt++;
    }while(a==-1);
    grid();
    if(a==1)
    printf("~~>\aPLAYER %d WINS",--capt);
    else
    printf("~~>\aMATCH DRAW");
    getch();
    return 0;
    }
int result()
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

void grid()
{
    system("cls");
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