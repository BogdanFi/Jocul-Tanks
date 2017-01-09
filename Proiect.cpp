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
