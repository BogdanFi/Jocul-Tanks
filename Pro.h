#ifndef PRO_H_INCLUDED

#define PRO_H_INCLUDED

#define MAX_SPACE 100

#define DEFAULT_HEALTH 500


int x=0,y=0,i,Dificultate;
bool start;

bool gameEnd=false;

int maxHealth=DEFAULT_HEALTH;

bool leftMovement=false;

bool rightMovement=false;

bool upMovement=false;

bool downMovement=false;

bool leftMovement2=false;

bool rightMovement2=false;

bool upMovement2=false;

bool downMovement2=false;

int powerUpPosition1;

int powerUpPosition2;

int randomNum;


int powerUpPosition_Heal1;

int powerUpPosition_Heal2;

int yourHealthT1=DEFAULT_HEALTH;

int yourHealthT2=DEFAULT_HEALTH;

int yourHealthT3=DEFAULT_HEALTH;

int yourHealthT4=DEFAULT_HEALTH;


int powerUpPosition_Heal1;
int powerUpPosition_Heal2;
int yourHealthT1=DEFAULT_HEALTH;
int yourHealthT2=DEFAULT_HEALTH;
int yourHealthT3=DEFAULT_HEALTH;
int yourHealthT4=DEFAULT_HEALTH;

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


void resetGame()

{

    gameEnd=false;

    yourHealthT1=DEFAULT_HEALTH;

    yourHealthT2=DEFAULT_HEALTH;

    yourHealthT3=DEFAULT_HEALTH;

    yourHealthT4=DEFAULT_HEALTH;

}

int gamespeed= 60;

int gameMode;

















#endif // PRO_H_INCLUDED
