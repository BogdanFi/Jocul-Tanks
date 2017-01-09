#include <iostream>
#include "windows.h"
#include"Pro.h"

using namespace std;

int main()
{
    int x,y;
    system("color 0B");

    while (gameEnd==false)
    {
        system("cls");
        for(int i=0; i<24; i++)
        {


            cout<<Map1[i] << endl;

        }
        cout<<"Health"<<yourHealthT1<<"/"<<maxHealth<<"          "<<"Health"<<yourHealthT2<<"/"<<maxHealth;
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

                        if (leftMovement2&&Map1[y][x-1]!='#'&&Map1[y][x-1]!='R')
                        {
                            x--;
                            Map1[y][x]='(';

                        }
                        else if(Map1[y][x-1]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        if(rightMovement2&&Map1[y][x+1]!='#'&&Map1[y][x+1]!='R')
                        {
                            x++;
                            Map1[y][x]=')';

                        }
                        else if(Map1[y][x+1]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        if(upMovement2&&Map1[y-1][x]!='#'&&Map1[y-1][x]!='R')
                        {
                            y--;
                            Map1[y][x]='^';

                        }
                        else if(Map1[y-1][x]=='R')
                        {
                            yourHealthT2-=100;
                        }
                        if(downMovement2&&Map1[y+1][x]!='#'&&Map1[y+1][x]!='R')
                        {
                            y++;
                            Map1[y][x]='.';
                        }
                        else if(Map1[y+1][x]=='R')
                        {
                            yourHealthT2-=100;
                        }


                    }




                    break;
