Skip to content

Search…
All gists
GitHub
New gist
@alirezamdk 
1 @alirezamdkalirezamdk/tic-tac-toe.c
Last active 5 months ago
 
<script src="https://gist.github.com/alirezamdk/7156b2eb44b1aa9b4863a2b2f13c405d.js"></script>
  
 Code  Revisions 2  Stars 1
tic-tac-toe with C and so amateur
 tic-tac-toe.c
//End : 1 v 1 : 25/8/96
//Ary mad ..
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

void sc(int a);
int main()
{
    char Tic_Tac_Toe[4][4],ans,Ready;
    int con=0,Turn_,i,j,d,s[4][4],X_win=0,O_win=0,turn=1,select_1,MO;

    sc(2);
    printf("\n  **********************************");
    printf("\n  *");
    sc(7);
    printf("          Tic-Tac-Toe           ");
    sc(2);
    printf("*\n  *");
    sc(7);
    printf("        Credit  Ary Mad         ");
    sc(2);
    printf("*\n  *        ");
    sc(7);
    printf("*_* ^_^ -_- @_@         ");
    sc(2);
    printf("*\n  **********************************\n ");
    sc(5);
    printf("\n\n\n Wellcome to Tic-Tac-Toe ");
    sc(7);
    printf("\n\n   please select game type \n   1 - person vs person \n   2 - pc vs person (Soon ... ) \n   Enter Number : ");
    scanf("%d",&select_1);//select menu
    if (select_1==1) // 2 nafare
    {
        system("cls");
        // Player one : X \n Player two : O \n \n (Press 'r' to Continue)
        printf(" Player one : ");
        sc(11);
        printf("X ");
        sc(7);
        printf("\n Player two : ");
        sc(12);
        printf("O");
        sc(7);

        printf("\n\n  LODING \n\n  ");
        for(MO=1; MO<=30; MO++)
        {
            sc(25);
            printf("%c",177);
            Sleep(50) ;
        }
        sc(7);

        {
            printf(" \n \n  (  Press '");
            sc(10); //12 X: 9
            printf("R");
            sc(7); //7 O : 12
            printf("' to Continue  )...\n\n  ");
        }
        do
        {
            Ready=getch();
        }
        while ( !(Ready == 'r' || Ready =='R') );
        {
            system("cls");
            {
                {
s_m:
                    d=0;
                    con=0;
                    for (j=1; j<=3; j++)                 //bara ine k adade ro ok kone !
                    {
                        for (i=1; i<=3; i++)
                        {
                            d++;
                            Tic_Tac_Toe[i][j]=d;
                            s[i][j]=0;
                        }
                    }
s:
                    for (j=1; j<=3; j++)                                                                                            //// in bara ine k oonaEi k Entekhab shodan moshakhas beshan
                    {
                        for (i=1; i<=3; i++)
                        {
                            if (Tic_Tac_Toe[i][j]+48=='O')                                                       //oon cell Ei k entekhab shode boon moshakhas mishe :)
                            {
                                s[i][j] = i;
                                // printf(" [%d] [%d] -",i,j);                                                        // minivise
                            }
                            if (Tic_Tac_Toe[i][j]+48=='X')                                                       //oon cell Ei k entekhab shode boon moshakhas mishe :)
                            {
                                s[i][j] = i;
                                // printf(" [%d] [%d] -",i,j);                                                        // minivise
                            }
                        }
                    }
                    sc(2);
                    printf("\n *******************************\n");
                    sc(7);
                    printf("  Player 1 : %d  |  Player 2 : %d \n ",X_win,O_win); //Takmin nashod : inja bord va bakhst ro mige
                    sc(2);
                    printf("*******************************\n");
                    sc(7);
                    printf("\n");
                    printf("    -------------------------\n    |       |       |       |\n    |   ");
                    if ( Tic_Tac_Toe[1][1] == 'O'-48 ) sc(12);  //1 1
                    if  ( Tic_Tac_Toe[1][1] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[1][1]+48);
                    sc(7);
                    printf("   |   ");                             //2 1
                    if ( Tic_Tac_Toe[2][1] == 'O'-48 ) sc(12);
                    if  ( Tic_Tac_Toe[2][1] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[2][1]+48);
                    sc(7);
                    printf("   |   ");
                    if ( Tic_Tac_Toe[3][1] == 'O'-48 ) sc(12); //3 1
                    if  ( Tic_Tac_Toe[3][1] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[3][1]+48);
                    sc(7);
                    printf("   |\n    |       |       |       |\n");
                    printf("    -------------------------\n    |       |       |       |\n    |   ");
                    if ( Tic_Tac_Toe[1][2] == 'O'-48 ) sc(12); //1 2
                    if  ( Tic_Tac_Toe[1][2] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[1][2]+48);
                    sc(7);
                    printf("   |   ");
                    if ( Tic_Tac_Toe[2][2] == 'O'-48 ) sc(12); //2 2
                    if  ( Tic_Tac_Toe[2][2] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[2][2]+48);
                    sc(7);
                    printf("   |   ");
                    if ( Tic_Tac_Toe[3][2] == 'O'-48 ) sc(12); //3 2
                    if  ( Tic_Tac_Toe[3][2] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[3][2]+48);
                    sc(7);
                    printf("   |\n    |       |       |       |\n");
                    printf("    -------------------------\n    |       |       |       |\n    |   ");

                    if ( Tic_Tac_Toe[1][3] == 'O'-48 ) sc(12); //1 3
                    if  ( Tic_Tac_Toe[1][3] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[1][3]+48);
                    sc(7);
                    printf("   |   ");
                    if ( Tic_Tac_Toe[2][3] == 'O'-48 ) sc(12); //2 3
                    if  ( Tic_Tac_Toe[2][3] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[2][3]+48);
                    sc(7);
                    printf("   |   ");
                    if ( Tic_Tac_Toe[3][3] == 'O'-48 ) sc(12); //3 3
                    if  ( Tic_Tac_Toe[3][3] == 'X'-48 ) sc(11);
                    printf("%c",Tic_Tac_Toe[3][3]+48);
                    sc(7);
                    printf("   |\n    |       |       |       |\n");
                    printf("    -------------------------\n");
                    switch(turn)
                    {
                    case 0: //O//
                        printf(" \n Turn : Player ");
                        sc(12);
                        printf("O");
                        sc(7);
                        printf(" \n\n Enter a cell number : ");
                        {
                            {
                                //O//
                                //inja halghe he tamomm mishe ..
                                if (Tic_Tac_Toe[1][1]+48=='X' && Tic_Tac_Toe[2][1]+48=='X' && Tic_Tac_Toe[3][1]+48=='X')  //barande ==================================
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][2]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[3][2]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][3]+48=='X' && Tic_Tac_Toe[2][3]+48=='X' && Tic_Tac_Toe[3][3]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);

                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][1]+48=='X' && Tic_Tac_Toe[1][2]+48=='X' && Tic_Tac_Toe[1][3]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[2][1]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[2][3]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[3][1]+48=='X' && Tic_Tac_Toe[3][2]+48=='X' && Tic_Tac_Toe[3][3]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][1]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[3][3]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[3][1]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[1][3]+48=='X')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                    X_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }                                                                                                                                     //barande x ==================================
                                if (Tic_Tac_Toe[1][1]+48=='O' && Tic_Tac_Toe[2][1]+48=='O' && Tic_Tac_Toe[3][1]+48=='O')  //barande ==================================
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][2]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[3][2]+48=='O')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][3]+48=='O' && Tic_Tac_Toe[2][3]+48=='O' && Tic_Tac_Toe[3][3]+48=='O')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][1]+48=='O' && Tic_Tac_Toe[1][2]+48=='O' && Tic_Tac_Toe[1][3]+48=='O')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[2][1]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[2][3]+48=='O')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[3][1]+48=='O' && Tic_Tac_Toe[3][2]+48=='O' && Tic_Tac_Toe[3][3]+48=='O') ////RIDI ...............................................................
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[1][1]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[3][3]+48=='O')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                if (Tic_Tac_Toe[3][1]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[1][3]+48=='O')
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                    O_win++;
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y' || ans=='Y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }                                                                                                                     //barande O ==================================
                                if (con==9)                                                                                                                 //MOSAVI ~_~
                                {
                                    printf("\n Oops, you cant enter a number. \n\n Equal . . .    \n\n");
                                    printf(" Do you want to replay? ( y / n ) : ");
                                    do
                                    {
                                        ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                    }
                                    while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                    printf("%c\n",ans);
                                    if (ans=='y')
                                    {
                                        system("cls");
                                        goto s_m;
                                    }
                                    else if (ans=='n' || ans=='N')
                                    {
                                        goto e;
                                    }
                                }
                                scanf("%d",&Turn_);                                                                                                    //Shomare ra daryaft mikonad ...
                                if ( (Turn_<=0) || (Turn_>=10))                                                                                            //age meghdar gheyr mojaz bood
                                {
                                    system("cls");
                                    printf(" Err: please enter a true number ");
                                    goto s;
                                }

                                if (Turn_==1 || Turn_==2 || Turn_==3)                                                                             //ridif avval ..
                                {
                                    for (i=1; i<=3; i++)                                                                                                    // bara in ke bebine entekhab shode ya na :| line 1
                                    {
                                        if (s[i][1]==Turn_)
                                        {
                                            system("cls");
                                            printf(" Err: This cell was selected  ");
                                            goto s;
                                        }
                                    }
                                    Tic_Tac_Toe[Turn_][1] = 'O'-48;
                                }
                                if (Turn_==4 || Turn_==5 || Turn_== 6)
                                {
                                    Turn_-=3;
                                    for (i=1; i<=3; i++)                                                                                                   // bara in ke bebine entekhab shode ya na :| line 2
                                    {
                                        if (s[i][2]==Turn_)
                                        {
                                            system("cls");
                                            printf(" Err: This cell was selected  ");
                                            goto s;
                                        }
                                    }
                                    Tic_Tac_Toe[Turn_][2] = 'O'-48;
                                }
                                if (Turn_==7 || Turn_==8 || Turn_==9)
                                {
                                    Turn_-=6;
                                    for (i=1; i<=3; i++)                                                                                                   // bara in ke bebine entekhab shode ya na :| line 3
                                    {
                                        if (s[i][3]==Turn_)
                                        {
                                            system("cls");
                                            printf(" Err: This cell was selected  ");
                                            goto s;
                                        }
                                    }
                                    Tic_Tac_Toe[Turn_][3] = 'O'-48;
                                }
                                con++;
                                turn++;
                                system("cls");
                                goto s;
                            } //O//
                        };
                        break;
                    case 1: //X//
                        printf(" \n Turn : Player ");
                        sc(11);
                        printf("X");
                        sc(7);
                        printf(" \n\n Enter a cell number : ");
                        {
                            for (j=1; j<=3; j++)                                                                                            //// in bara ine k oonaEi k Entekhab shodan moshakhas beshan
                            {
                                for (i=1; i<=3; i++)
                                {
                                    if (Tic_Tac_Toe[i][j]+48=='X')                                                         //oon cell Ei k entekhab shode boon moshakhas mishe :)
                                    {
                                        if ( i==1 && j==1 ) s[1][1]=1;
                                        if ( i==2 && j==1) s[2][1]=2;
                                        if ( i==3 && j==1) s[3][1]=3;
                                        if ( i==1 && j==2 ) s[1][2]=1;
                                        if ( i==2 && j==2) s[2][2]=2;
                                        if ( i==3 && j==2) s[3][2]=3;
                                        if ( i==1 && j==3 ) s[1][3]=1;
                                        if ( i==2 && j==3) s[2][3]=2;
                                        if ( i==3 && j==3) s[3][3]=3;
                                        // printf(" [%d] [%d] -",i,j);                                                        // minivise
                                    }
                                }
                            }                                                                                                                                          //inja halghe he tamomm mishe ..

                            if (Tic_Tac_Toe[1][1]+48=='O' && Tic_Tac_Toe[2][1]+48=='O' && Tic_Tac_Toe[3][1]+48=='O')  //barande ==================================
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][2]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[3][2]+48=='O')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][3]+48=='O' && Tic_Tac_Toe[2][3]+48=='O' && Tic_Tac_Toe[3][3]+48=='O')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][1]+48=='O' && Tic_Tac_Toe[1][2]+48=='O' && Tic_Tac_Toe[1][3]+48=='O')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[2][1]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[2][3]+48=='O')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[3][1]+48=='O' && Tic_Tac_Toe[3][2]+48=='O' && Tic_Tac_Toe[3][3]+48=='O') ////RIDI ...............................................................
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][1]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[3][3]+48=='O')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[3][1]+48=='O' && Tic_Tac_Toe[2][2]+48=='O' && Tic_Tac_Toe[1][3]+48=='O')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : O  \n\n");
                                O_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }                                                                                                                                     //barande O ==================================
                            if (Tic_Tac_Toe[1][1]+48=='X' && Tic_Tac_Toe[2][1]+48=='X' && Tic_Tac_Toe[3][1]+48=='X')  //barande ==================================
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][2]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[3][2]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][3]+48=='X' && Tic_Tac_Toe[2][3]+48=='X' && Tic_Tac_Toe[3][3]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][1]+48=='X' && Tic_Tac_Toe[1][2]+48=='X' && Tic_Tac_Toe[1][3]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[2][1]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[2][3]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[3][1]+48=='X' && Tic_Tac_Toe[3][2]+48=='X' && Tic_Tac_Toe[3][3]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[1][1]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[3][3]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            if (Tic_Tac_Toe[3][1]+48=='X' && Tic_Tac_Toe[2][2]+48=='X' && Tic_Tac_Toe[1][3]+48=='X')
                            {
                                printf("\n Oops, you cant enter a number. \n\n Winer : X \n\n");
                                X_win++;
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y' || ans=='Y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }                                                                                                                                     //barande x ==================================
                            if (con==9)                                                                                                                 //MOSAVI ~_~
                            {
                                printf("\n Oops, you cant enter a number. \n\n Equal . . .    \n\n");
                                printf(" Do you want to replay? ( y / n ) : ");
                                do
                                {
                                    ans=getch();  ///////////////////////////////// BARA ine k Y ya N vared beshe
                                }
                                while ( !(ans == 'y' || ans =='n' || ans == 'Y' || ans =='N') );
                                printf("%c\n",ans);
                                if (ans=='y')
                                {
                                    system("cls");
                                    goto s_m;
                                }
                                else if (ans=='n' || ans=='N')
                                {
                                    goto e;
                                }
                            }
                            scanf("%d",&Turn_);                                                                                                    //Shomare ra daryaft mikonad ...
                            if ( (Turn_<=0) || (Turn_>=10))                                                                                            //age meghdar gheyr mojaz bood
                            {
                                system("cls");

                                printf(" Err: please enter a true number ");
                                goto s;
                            }

                            if (Turn_==1 || Turn_==2 || Turn_==3)                                                                             //ridif avval ..
                            {
                                for (i=1; i<=3; i++)                                                                                                    // bara in ke bebine entekhab shode ya na :| line 1
                                {
                                    if (s[i][1]==Turn_)
                                    {
                                        system("cls");
                                        printf(" Err: This cell was selected  ");
                                        goto s;
                                    }
                                }

                                Tic_Tac_Toe[Turn_][1] = 'X'-48;
                            }
                            if (Turn_==4 || Turn_==5 || Turn_== 6)
                            {
                                Turn_-=3;
                                for (i=1; i<=3; i++)                                                                                                   // bara in ke bebine entekhab shode ya na :| line 2
                                {
                                    if (s[i][2]==Turn_)
                                    {
                                        system("cls");
                                        printf(" Err: This cell was selected  ");
                                        goto s;
                                    }
                                }
                                Tic_Tac_Toe[Turn_][2] = 'X'-48;
                            }
                            if (Turn_==7 || Turn_==8 || Turn_==9)
                            {
                                Turn_-=6;
                                for (i=1; i<=3; i++)                                                                                                   // bara in ke bebine entekhab shode ya na :| line 3
                                {
                                    if (s[i][3]==Turn_)
                                    {
                                        system("cls");
                                        printf(" Err: This cell was selected  ");
                                        goto s;
                                    }
                                }
                                Tic_Tac_Toe[Turn_][3] = 'X'-48;
                            }
                            con++;
                            turn--;
                            system("cls");
                            goto s;
                        } //X//
                    }
e:
                    return 0;
                } //End : 1 v 1
            }
        }
    }
    if (select_1==2)//1 nafre vs Pc //

    return 0;
}


void sc(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}


 @alirezamdk
   
 
 
Leave a comment
Attach files by dragging & dropping, , or pasting from the clipboard.  Styling with Markdown is supported
© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
Press h to open a hovercard with more details.
