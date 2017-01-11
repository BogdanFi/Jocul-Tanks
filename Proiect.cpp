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


    if(GetAsyncKeyState(0x32))
    if(GetAsyncKeyState(0x33))
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
     
            for(i=0;i<=10000;i++)
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
