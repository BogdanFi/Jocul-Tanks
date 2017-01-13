#include <iostream>
#include "windows.h"
#include"Pro.h"
#include<time.h>

using namespace std;

int main()
 {  system("color 0A");
    for(int i=0;i<=12;i++)
    cout<<endl;
    cout<<"                                                 #################";
    cout<<endl;
    cout<<"                                                 #               #";
    cout<<endl;
    cout<<"                                                 #  JOCUL TANKS  #";
    cout<<endl;
    cout<<"                                                 #               #";
    cout<<endl;
    cout<<"                                                 #################";
    cout<<endl;
    cout<<"                                              Press any key to continue...";
    system("pause>nul");
    system("cls");
    cout<<endl<<endl<<endl;
    system("cls");
    srand(time(NULL));
    system("color 0E");
    while(1){
    clear_screen();
    system("color 0C");
    cout<<"       Press 1 to play with friends (two players)"<<endl;
    cout<<"       Press 2 to play a game versus computer"<<endl;
    cout<<"       Press 3 to exit"<<endl;
    if(GetAsyncKeyState(0x31)!=0){
            resetGame();
            clear_screen();
            char Map1[MAX_SPACE][MAX_SPACE]=
{
    "###############################################################",
    "#                                                             #",
    "#                                                             #",
    "#                             R                               #",
    "#     ###########             ######               #          #",
    "#               #                                  #        # #",
    "#               #                                  #        # #",
    "#               #         #######                  #        # #",
    "#               ####                               #        # #",
    "#                                                  #        # #",
    "#                         #######               ####        # #",
    "#                 ####          #                             #",
    "#                    #          #              #############  #",
    "#                    #                                ##      #",
    "#                    #                                ##      #",
    "#        #################                            ##      #",
    "#                               W                     ##      #",
    "#                                                     #########",
    "#                                             #               #",
    "#                                             #               #",
    "#         # # # # #                 #######   #               #",
    "#                 #                           #               #",
    "#                 #                 #######   #               #",
    "###############################################################"
};
     
            for(i=0;i<=5000;i++)
    {
        clear_screen();
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                      Loading...";
    }
    while (gameEnd==false)
    {
        clear_screen();
        for(int i=0; i<24; i++)
        {


            cout<<Map1[i] << endl;

        }
        cout<<"T1Health"<<yourHealthT1<<"/"<<maxHealth<<"      "<<"T2Health"<<yourHealthT2<<"/"<<maxHealth;
        for( y=0; y<25; y++)
        {
            for( x=0; x<63; x++)
            {
                switch(Map1[y][x])
                {

                case 'W' :

                    if(GetAsyncKeyState(VK_LEFT)!=0&& GetAsyncKeyState(VK_SPACE)==0)
                    {
                        left2();
                        int newX= x-1;
                        switch(Map1[y][newX])
                        {

                        case ' ':

                            Map1[y][x]=' ';
                            x--;
                            Map1[y][newX]='W';

                            break;
                        }

                    }
                    if(GetAsyncKeyState(VK_DOWN)!=0&& GetAsyncKeyState(VK_SPACE)==0)
                    {
                        down2();
                        int newY= y+1;
                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y++;
                            Map1[newY][x]='W';
                            Map1[newY-1][x]=' ';

                            break;
                        }

                    }
                    if(GetAsyncKeyState(VK_UP)!=0&& GetAsyncKeyState(VK_SPACE)==0)
                    {
                        up2();
                        int newY= y-1;

                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y--;
                            Map1[newY][x]='W';
                            Map1[newY+1][x]=' ';

                            break;
                        }

                    }
                    if (GetAsyncKeyState(VK_RIGHT)!=0&&GetAsyncKeyState(VK_SPACE)==0)
                    {
                        right2();
                        int newX = x+1;
                        switch (Map1[y][newX])
                        {

                        case ' ':
                            Map1[y][x]=' ';
                            ++x;
                            Map1[y][newX]='W';

                            break;
                        }
                    }

                    if (GetAsyncKeyState(VK_SPACE)!=0 && GetAsyncKeyState(0x58)==0 )
                    {

                        if (leftMovement2&&Map1[y][x-1]!='#'&&Map1[y][x-1]!='R'&&Map1[y][x-1]!='L'&&Map1[y][x-1]!='G')
                        {
                            x--;
                            Map1[y][x]='(';

                        }
                        else if(Map1[y][x-1]=='R')
                        {

                            yourHealthT2-=100;
                        }
                        else if(Map1[y][x-1]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else if(Map1[y][x-1]=='G')
                        {
                            yourHealthT4-=100;
                        }


                        if(rightMovement2&&Map1[y][x+1]!='#'&&Map1[y][x+1]!='R'&&Map1[y][x+1]!='L'&&Map1[y][x+1]!='G')
                        {
                            x++;
                            Map1[y][x]=')';

                        }
                        else if(Map1[y][x+1]=='R')
                        {

                            yourHealthT2-=100;
                        }
                        else if(Map1[y][x+1]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else if(Map1[y][x+1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        if(upMovement2&&Map1[y-1][x]!='#'&&Map1[y-1][x]!='R'&&Map1[y-1][x]!='L'&&Map1[y-1][x]!='G')
                        {
                            y--;
                            Map1[y][x]='^';

                        }
                        else if(Map1[y-1][x]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else if(Map1[y-1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else   if(Map1[y-1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        if(downMovement2&&Map1[y+1][x]!='#'&&Map1[y+1][x]!='R'&&Map1[y+1][x]!='L'&&Map1[y+1][x]!='G')
                        {
                            y++;
                            Map1[y][x]='.';
                        }
                        else if(Map1[y+1][x]=='R')
                        {

                            yourHealthT2-=100;
                        }
                        else if(Map1[y+1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else  if(Map1[y+1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }



                    }




                    break;
                  
                   case 'R' :

                    if(GetAsyncKeyState(0x41)!=0&& GetAsyncKeyState(0x58)==0)
                    {

                        left();
                        int newX= x-1;
                        switch(Map1[y][newX])
                        {

                        case ' ':

                            Map1[y][x]=' ';
                            x--;
                            Map1[y][newX]='R';

                            break;
                        }


                    }
                    if(GetAsyncKeyState(0x53)!=0&& GetAsyncKeyState(0x58)==0)
                    {

                        down();
                        int newY= y+1;
                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y++;
                            Map1[newY][x]='R';
                            Map1[newY-1][x]=' ';

                            break;
                        }


                    }
                    if(GetAsyncKeyState(0x57)!=0&& GetAsyncKeyState(0x58)==0)
                    {

                        up();
                        int newY= y-1;

                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y--;
                            Map1[newY][x]='R';
                            Map1[newY+1][x]=' ';

                            break;
                        }


                    }
                    if (GetAsyncKeyState(0x44)!=0&&GetAsyncKeyState(0x58)==0)
                    {
                        right();
                        int newX = x+1;

                        switch (Map1[y][newX])
                        {

                        case ' ':
                            Map1[y][x]=' ';
                            x++;
                            Map1[y][newX]='R';

                            break;
                        }

                    }
                    if (GetAsyncKeyState(0x58)!=0 && GetAsyncKeyState(VK_SPACE)==0 )
                    {
                        if (leftMovement&&Map1[y][x-1]!='#'&&Map1[y][x-1]!='W'&&Map1[y][x-1]!='L'&&Map1[y][x-1]!='G')
                        {
                            x--;
                            Map1[y][x]='(';

                        }
                        else if(Map1[y][x-1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        else if(Map1[y][x-1]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y][x-1]=='L')
                        {
                            yourHealthT3-=100;
                        }



                        if(rightMovement&&Map1[y][x+1]!='#'&&Map1[y][x+1]!='W'&&Map1[y][x+1]!='L'&&Map1[y][x+1]!='G')
                        {
                            x++;
                            Map1[y][x]=')';

                        }
                         else if(Map1[y][x+1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        else if(Map1[y][x+1]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y][x+1]=='L')
                        {
                            yourHealthT3-=100;
                        }

                        if(upMovement&&Map1[y-1][x]!='#'&&Map1[y-1][x]!='W'&&Map1[y-1][x]!='L'&&Map1[y-1][x]!='G')
                        {
                            y--;
                            Map1[y][x]='^';

                        }
                        else   if(Map1[y-1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        else if(Map1[y-1][x]=='W')
                        {
                            yourHealthT1-=100;
                        }
                        else if(Map1[y-1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }

                        if(downMovement&&Map1[y+1][x]!='#'&&Map1[y+1][x]!='W'&&Map1[y+1][x]!='L'&&Map1[y+1][x]!='G')
                        {
                            y++;
                            Map1[y][x]='.';
                        }
                         else  if(Map1[y+1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        else if(Map1[y+1][x]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y+1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                    }
                    break;
                     
                case 'L':
                         Map1[y][x]=' ';

                break;
                case 'G':
                     Map1[y][x]=' ';

                    break;

                case ')':
                    Map1[y][x]=' ';
                    x++;
                    if (Map1[y][x]!='#' && Map1[y][x]!='W' && Map1[y][x]!='R'&& Map1[y][x]!='L'&& Map1[y][x]!='G')
                    {
                        Map1[y][x]=')';


                    }
                    else if(Map1[y][x]=='W')
                    {
                        yourHealthT1-=100;
                    }
                    else if(Map1[y][x]=='R')
                    {
                        yourHealthT2-=100;
                    }
                    else if(Map1[y][x]=='L')
                    {
                        yourHealthT3-=100;
                    }
                    else if(Map1[y][x]=='G')
                    {
                        yourHealthT4-=100;
                    }

                    break;

                case '(':
                    Map1[y][x]=' ';
                    x--;
                    if (Map1[y][x]!='#' && Map1[y][x]!='W' && Map1[y][x]!='R'&& Map1[y][x]!='L'&& Map1[y][x]!='G')
                    {
                        Map1[y][x]='(';


                    }
                    else if(Map1[y][x]=='W')
                    {
                        yourHealthT1-=100;
                    }
                    else if(Map1[y][x]=='R')
                    {
                        yourHealthT2-=100;
                    }
                    else if(Map1[y][x]=='L')
                    {
                        yourHealthT3-=100;
                    }
                    else if(Map1[y][x]=='G')
                    {
                        yourHealthT4-=100;
                    }

                    break;

                case '^':
                    Map1[y][x]=' ';
                    y--;
                    if (Map1[y][x]!='#' && Map1[y][x]!='W' && Map1[y][x]!='R'&& Map1[y][x]!='L'&& Map1[y][x]!='G')
                    {
                        Map1[y][x]='^';


                    }
                    else if(Map1[y][x]=='W')
                    {
                        yourHealthT1-=100;
                    }
                    else if(Map1[y][x]=='R')
                    {
                        yourHealthT2-=100;
                    }
                    else if(Map1[y][x]=='L')
                    {
                        yourHealthT3-=100;
                    }
                    else if(Map1[y][x]=='G')
                    {
                        yourHealthT4-=100;
                    }

                    break;

                case '.':
                    Map1[y][x]=' ';
                    y++;
                    if (Map1[y][x]!='#' && Map1[y][x]!='W' && Map1[y][x]!='R'&& Map1[y][x]!='L'&& Map1[y][x]!='G')
                    {
                        Map1[y][x]='.';


                    }
                    else if(Map1[y][x]=='W')
                    {
                        yourHealthT1-=100;
                    }
                    else if(Map1[y][x]=='R')
                    {
                        yourHealthT2-=100;
                    }
                    else if(Map1[y][x]=='L')
                    {
                        yourHealthT3-=100;
                    }
                    else if(Map1[y][x]=='G')
                    {
                        yourHealthT4-=100;
                    }

                    break;

                }

            }
        }
        if(yourHealthT1<=0)
        {
            gameEnd=true;
        }
        if(yourHealthT2<=0)
        {
            gameEnd=true;

        }
        Sleep(gamespeed);

    }
    system("cls");

    if(yourHealthT1<=0)
        {
            for(i=0;i<=3;i++){
            clear_screen ();
            cout<<"                             Player 2 has won!";
            system("pause>nul");
            if(i==3)
            {cout<<endl;
             cout<<"Press ENTER to return to menu...";
            }
            }

        }
    if(yourHealthT2<=0)
        {

            for(i=0;i<=3;i++){
            clear_screen ();
            cout<<"                             Player 1 has won!";
            system("pause>nul");
            if(i==3)
            {cout<<endl;
             cout<<"Press ENTER to return to menu...";
            }
            }

          }
    system("pause>nul");
     }
     if(GetAsyncKeyState(0x33)!=0)
        return 0;
if (GetAsyncKeyState(0x32)!=0)
    {
            resetGame();
            system("cls");
            clear_screen();

            char Map1[MAX_SPACE][MAX_SPACE]=
{
    "###############################################################",
    "#                                                             #",
    "#                                      #                      #",
    "#                             R        #                      #",
    "#     ###########             ############         #          #",
    "#               #                                  #        # #",
    "#               #               #                  #        # #",
    "#               #         #######                  #        # #",
    "#     L         ####                               #   G    # #",
    "#                                                  #        # #",
    "#                         #######          #########        # #",
    "#                 ####          #                          #  #",
    "#         #          #          #    ########  #############  #",
    "#       #            #                #               ##      #",
    "#     #              #                #               ##      #",
    "#   #    #################            #               ##      #",
    "# #                             W                     ##      #",
    "#   #                                                 #########",
    "#     #                  #                    #       ##      #",
    "#       #                                     #     #    #    #",
    "#         # # # # #      #          #######   #   #        #  #",
    "#                 #      #                    # #           # #",
    "#                 #      #          #######   #               #",
    "###############################################################"
};
    cout<<"Choose your game mode:"<<endl;
    cout<<"Easy (Press E)"<<endl;
    cout<<"Medium (Press M)"<<endl;
    cout<<"Hard (Press H)"<<endl;
    start=0;
    while(start==0)
    {
    if(GetAsyncKeyState(0x45)!=0)
    {Dificultate=100;
    start=1;
    }
    if(GetAsyncKeyState(0x4D)!=0)
    {Dificultate=40;
    start=1;
    }
    if(GetAsyncKeyState(0x48)!=0)
    {Dificultate=20;
    start=1;
    }
    }
    if(start==1)
    {
    {system("cls");
    for(i=0;i<=10000;i++)
    {
        clear_screen();
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                      Loading...";

    }


    while (gameEnd==false)
    {
        clear_screen();
        for(int i=0; i<24; i++)
        {


            cout<<Map1[i] << endl;

        }
        cout<<endl;
        cout<<"Your health is";
        if(yourHealthT1>=0)
        cout<<" "<<yourHealthT1<<"/"<<maxHealth;
        if(yourHealthT2>0)
        cout<<"      "<<"T2Health"<<yourHealthT2<<"/"<<maxHealth;
        else
            cout<<"              ";

        if(yourHealthT3>0)
        cout<<"      "<<"T3Health"<<yourHealthT3<<"/"<<maxHealth;
        else
            cout<<"               ";
        if(yourHealthT4>0)
        cout<<"      "<<"T4Health"<<yourHealthT4<<"/"<<maxHealth;
        else
            cout<<"                                    ";
        for( y=0; y<25; y++)
        {
            for( x=0; x<63; x++)
            {
        switch(Map1[y][x])
                {

                case 'W' :

                    if(GetAsyncKeyState(VK_LEFT)!=0&& GetAsyncKeyState(VK_SPACE)==0)
                    {
                        left2();
                        int newX= x-1;
                        switch(Map1[y][newX])
                        {

                        case ' ':

                            Map1[y][x]=' ';
                            x--;
                            Map1[y][newX]='W';

                            break;
                        }

                    }
                    if(GetAsyncKeyState(VK_DOWN)!=0&& GetAsyncKeyState(VK_SPACE)==0)
                    {
                        down2();
                        int newY= y+1;
                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y++;
                            Map1[newY][x]='W';
                            Map1[newY-1][x]=' ';

                            break;
                        }

                    }
                    if(GetAsyncKeyState(VK_UP)!=0&& GetAsyncKeyState(VK_SPACE)==0)
                    {
                        up2();
                        int newY= y-1;

                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y--;
                            Map1[newY][x]='W';
                            Map1[newY+1][x]=' ';

                            break;
                        }

                    }
                    if (GetAsyncKeyState(VK_RIGHT)!=0&&GetAsyncKeyState(VK_SPACE)==0)
                    {
                        right2();
                        int newX = x+1;
                        switch (Map1[y][newX])
                        {

                        case ' ':
                            Map1[y][x]=' ';
                            ++x;
                            Map1[y][newX]='W';

                            break;
                        }
                    }

                    if (GetAsyncKeyState(VK_SPACE)!=0 && GetAsyncKeyState(0x58)==0 )
                    {

                        if (leftMovement2&&Map1[y][x-1]!='#'&&Map1[y][x-1]!='R'&&Map1[y][x-1]!='L'&&Map1[y][x-1]!='G')
                        {
                            x--;
                            Map1[y][x]='(';

                        }
                        else if(Map1[y][x-1]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else if(Map1[y][x-1]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else if(Map1[y][x-1]=='G')
                        {
                            yourHealthT4-=100;
                        }


                        if(rightMovement2&&Map1[y][x+1]!='#'&&Map1[y][x+1]!='R'&&Map1[y][x+1]!='L'&&Map1[y][x+1]!='G')
                        {
                            x++;
                            Map1[y][x]=')';

                        }
                        else if(Map1[y][x+1]=='R')
                        {

                            yourHealthT2-=100;
                        }
                        else if(Map1[y][x+1]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else if(Map1[y][x+1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        if(upMovement2&&Map1[y-1][x]!='#'&&Map1[y-1][x]!='R'&&Map1[y-1][x]!='L'&&Map1[y-1][x]!='G')
                        {
                            y--;
                            Map1[y][x]='^';

                        }
                        else if(Map1[y-1][x]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else if(Map1[y-1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else   if(Map1[y-1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }
                        if(downMovement2&&Map1[y+1][x]!='#'&&Map1[y+1][x]!='R'&&Map1[y+1][x]!='L'&&Map1[y+1][x]!='G')
                        {
                            y++;
                            Map1[y][x]='.';
                        }
                        else if(Map1[y+1][x]=='R')
                        {

                            yourHealthT2-=100;
                        }
                        else if(Map1[y+1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else  if(Map1[y+1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }



                    }




                    break;

                case 'R' :

                    if(yourHealthT2<=0)
                        Map1[y][x]=' ';
                    randomNum=rand()%Dificultate+1;

                    if(randomNum==2)
                    {
                        if(Map1[y][x-1]!='#'&&Map1[y][x-1]!='W'&&Map1[y][x-1]!='L'&&Map1[y][x-1]!='G')
                        {
                            x--;
                            Map1[y][x]='(';
                        }
                        else if(Map1[y][x-1]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y][x-1]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else if(Map1[y][x-1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                    }
                    if(randomNum==1)
                    {
                        if(Map1[y][x+1]!='#'&&Map1[y][x+1]!='W'&&Map1[y][x+1]!='L'&&Map1[y][x+1]!='G')
                        {
                            x++;
                            Map1[y][x]=')';
                        }
                        else if(Map1[y][x+1]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y][x+1]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else if(Map1[y][x+1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                    }
                    if(randomNum==4)
                    {
                        if(Map1[y-1][x]!='#'&&Map1[y-1][x]!='W'&&Map1[y-1][x]!='L'&&Map1[y-1][x]!='G')
                        {
                            y--;
                            Map1[y][x]='^';
                        }
                        else if(Map1[y-1][x]=='W')
                        {
                            yourHealthT1-=100;
                        }
                        else if(Map1[y-1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else   if(Map1[y-1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }

                    }
                    if(randomNum==3)
                    {
                        if(Map1[y+1][x]!='#'&&Map1[y+1][x]!='W'&&Map1[y+1][x]!='L'&&Map1[y+1][x]!='G')
                        {
                            y++;
                            Map1[y][x]='.';
                        }
                        else if(Map1[y+1][x]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y+1][x]=='L')
                        {
                            yourHealthT3-=100;
                        }
                        else  if(Map1[y+1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }

                    }

                    if(randomNum==10)
                    {
                        int newX= x-1;
                        switch(Map1[y][newX])
                        {

                        case ' ':

                            Map1[y][x]=' ';
                            x--;
                            Map1[y][newX]='R';


                            break;
                        }
                    }
                    if(randomNum==11)
                    {
                        int newY= y+1;
                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y++;
                            Map1[newY][x]='R';
                            Map1[newY-1][x]=' ';

                            break;
                        }


                    }
                    if(randomNum==12)
                    {
                        int newY= y-1;

                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y--;
                            Map1[newY][x]='R';
                            Map1[newY+1][x]=' ';

                            break;
                        }

                    }
                    if(randomNum==13)
                    {
                        int newX = x+1;
                        switch (Map1[y][newX])
                        {

                        case ' ':
                            Map1[y][x]=' ';
                            ++x;
                            Map1[y][newX]='R';

                            break;
                        }

                    }




                    break;

                case 'L':
                    if(yourHealthT3<=0)
                        Map1[y][x]=' ';
                    randomNum=rand()%Dificultate+1;

                    if(randomNum==1)
                    {
                        if(Map1[y][x-1]!='#'&&Map1[y][x-1]!='W'&&Map1[y][x-1]!='R'&&Map1[y][x-1]!='G')
                        {
                            x--;
                            Map1[y][x]='(';
                        }
                        else if(Map1[y][x-1]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y][x-1]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else if(Map1[y][x-1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                    }
                    if(randomNum==2)
                    {
                        if(Map1[y][x+1]!='#'&&Map1[y][x+1]!='W'&&Map1[y][x+1]!='R'&&Map1[y][x+1]!='G')
                        {
                            x++;
                            Map1[y][x]=')';
                        }
                        else if(Map1[y][x+1]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y][x+1]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else if(Map1[y][x+1]=='G')
                        {
                            yourHealthT4-=100;
                        }
                    }
                    if(randomNum==3)
                    {
                        if(Map1[y-1][x]!='#'&&Map1[y-1][x]!='W'&&Map1[y-1][x]!='R'&&Map1[y-1][x]!='G')
                        {
                            y--;
                            Map1[y][x]='^';
                        }
                        else if(Map1[y-1][x]=='W')
                        {
                            yourHealthT1-=100;
                        }
                        else if(Map1[y-1][x]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else   if(Map1[y-1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }

                    }
                    if(randomNum==4)
                    {
                        if(Map1[y+1][x]!='#'&&Map1[y+1][x]!='W'&&Map1[y+1][x]!='R'&&Map1[y+1][x]!='G')
                        {
                            y++;
                            Map1[y][x]='.';
                        }
                        else if(Map1[y+1][x]=='W')
                        {

                            yourHealthT1-=100;
                        }
                        else if(Map1[y+1][x]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        else  if(Map1[y+1][x]=='G')
                        {
                            yourHealthT4-=100;
                        }

                    }

                    if(randomNum==10)
                    {
                        int newX= x-1;
                        switch(Map1[y][newX])
                        {

                        case ' ':

                            Map1[y][x]=' ';
                            x--;
                            Map1[y][newX]='L';


                            break;
                        }
                    }
                    if(randomNum==11)
                    {
                        int newY= y+1;
                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y++;
                            Map1[newY][x]='L';
                            Map1[newY-1][x]=' ';

                            break;
                        }


                    }
                    if(randomNum==12)
                    {
                        int newY= y-1;

                        switch(Map1[newY][x])
                        {

                        case ' ':

                            Map1[newY][x]=' ';
                            y--;
                            Map1[newY][x]='L';
                            Map1[newY+1][x]=' ';

                            break;
                        }

                    }
                    if(randomNum==13)
                    {
                        int newX = x+1;
                        switch (Map1[y][newX])
                        {

                        case ' ':
                            Map1[y][x]=' ';
                            ++x;
                            Map1[y][newX]='L';

                            break;
                        }

                    }


                    break;
