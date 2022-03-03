#include "tictactoe.h"

int main()
{
  char XO[10]={'0','1','2','3','4','5','6','7','8','9'};

    int capt=1, a, opt;
    char unit;
    do
    {
    grid(XO);
    capt = (capt%2)?1:2;
    printf("ENTER YOUR CHOICE PLAYER %d: ",capt);
    scanf("%d",&opt);
    unit = (capt==2)? 'X' : 'O' ;
    if (opt == 1 && XO[1] == '1')
            XO[1] = unit;
            
        else if (opt == 2 && XO[2] == '2')
            XO[2] = unit;
            
        else if (opt == 3 && XO[3] == '3')
            XO[3] = unit;
            
        else if (opt == 4 && XO[4] == '4')
            XO[4] = unit;
            
        else if (opt == 5 && XO[5] == '5')
            XO[5] = unit;
            
        else if (opt == 6 && XO[6] == '6')
            XO[6] = unit;
            
        else if (opt == 7 && XO[7] == '7')
            XO[7] = unit;
            
        else if (opt == 8 && XO[8] == '8')
            XO[8] = unit;
            
        else if (opt == 9 && XO[9] == '9')
            XO[9] = unit;
        else
        {
            printf("WRONG MOVE");
            capt--;
            getchar();
        }    
        a=result(XO);
        capt++;
    }while(a==-1);
    grid(XO);
    if(a==1)
    printf("~~>\aPLAYER %d WINS",--capt);
    else
    printf("~~>\aMATCH DRAW");
    getchar();
    return 0;
    }