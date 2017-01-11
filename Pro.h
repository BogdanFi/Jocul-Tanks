#ifndef PRO_H_INCLUDED
#define PRO_H_INCLUDED
#define MAX_SPACE 100
#define DEFAULT_HEALTH 500
int x=0,y=0,n=1;
bool gameEnd=false;
bool leftMovement=false;
bool rightMovement=false;
bool upMovement=false;
bool downMovement=false;
bool leftMovement2=false;
bool rightMovement2=false;
bool upMovement2=false;
bool downMovement2=false;

int randomNum;
int randomNum1;

void left2()
{
    leftMovement2=true;
    rightMovement2=false;
    upMovement2=false;
    downMovement2=false;

}
void right2()
{
    leftMovement2=false;
    rightMovement2=true;
    upMovement2=false;
    downMovement2=false;

}
void up2()
{
    leftMovement2=false;
    rightMovement2=false;
    upMovement2=true;
    downMovement2=false;
}
void down2()
{
    leftMovement2=false;
    rightMovement2=false;
    upMovement2=false;
    downMovement2=true;
}

void left()
{
    leftMovement=true;
    rightMovement=false;
    upMovement=false;
    downMovement=false;

}
void right()
{
    leftMovement=false;
    rightMovement=true;
    upMovement=false;
    downMovement=false;

}
void up()
{
    leftMovement=false;
    rightMovement=false;
    upMovement=true;
    downMovement=false;
}
void down()
{
    leftMovement=false;
    rightMovement=false;
    upMovement=false;
    downMovement=true;
}
void clear_screen (){                           	//Actually, this func does not clear,
  COORD coord = {0};                                //it just set the cursor at the
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );    // top left corner of the screen
  SetConsoleCursorPosition ( h, coord );
}
int maxHealth=500;
int yourHealthT1=maxHealth;
int yourHealthT2=maxHealth;
int yourHealthT3=maxHealth;
int yourHealthT4=maxHealth;
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

void resetGame()
{
    gameEnd=false;
    yourHealthT1=maxHealth;
    yourHealthT2=maxHealth;
    yourHealthT3=maxHealth;
    yourHealthT4=maxHealth;
}
int gamespeed= 60;
int gameMode;








#endif // PRO_H_INCLUDED
