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
