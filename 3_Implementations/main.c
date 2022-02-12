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