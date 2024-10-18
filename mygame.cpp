#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

void header();
void maze();
void printBonus();

void printplayer();
void eraseplayer();
void movePlayer();

void playerright();
void playerleft();
void playerdown();
void playerup();

void printenemy1();
void eraseenemy1();
void moveenemy1();

void printenemy2();
void eraseenemy2();
void moveenemy2();

void printenemy3();
void eraseenemy3();
void moveenemy3();

bool bonus=false;
int score=0;
int px=5,py=8;
int ex1=120,ey1=8;
int ex2=10,ey2=15;
int ex3=5,ey3=30;

main()
{
	system("cls");
	header();
	maze();
	printBonus();
	gotoxy(2,35);
	cout<<"Score="<<score;

	printenemy1();
	printenemy2();
	printenemy3();
	printplayer();

	while(true)
	{
		movePlayer();
		moveenemy1();
		moveenemy2();
		moveenemy3();
	}
}

void header()
{
cout<<"    #####     ######     #####      ######          ##  ##     ######     ##       ##       ######     #####   "<<endl;
cout<<"    ##  ##    ##        ##            ##            ## ##        ##       ##       ##       ##         ##  ##  "<<endl; 
cout<<"    #####     #####      ####         ##            ####         ##       ##       ##       #####      #####   "<<endl;
cout<<"    ##        ##            ##        ##            ## ##        ##       ##       ##       ##         ## ##   "<<endl;
cout<<"    ##        ######    #####         ##            ##  ##     ######     ######   ######   ######     ##  ##  "<<endl;
}

void maze()
{
cout<<"# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"#                                                                                                                                                                         #"<<endl;
cout<<"# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #"<<endl;
}

void printplayer()
{
	gotoxy(px,py);
	cout<<"      __       "<<endl;
	gotoxy(px,py+1);
	cout<<"     ( ;>      "<<endl;
	gotoxy(px,py+2);
	cout<<"      ||==>    "<<endl;
	gotoxy(px,py+3);
	cout<<"      ()       "<<endl;
	gotoxy(px,py+4);
	cout<<"      |_\\_    "<<endl;
}

void eraseplayer()
{
	gotoxy(px,py);
	cout<<"               "<<endl;
	gotoxy(px,py+1);
	cout<<"               "<<endl;
	gotoxy(px,py+2);
	cout<<"               "<<endl;
	gotoxy(px,py+3);
	cout<<"               "<<endl;
	gotoxy(px,py+4);
	cout<<"               "<<endl;
}

void playerright()
{
   if(getCharAtxy(px+16,py)==' ')
   {
	Sleep(100);
	eraseplayer();
	px=px+3;
	printplayer();
   }
}

void playerup()
{
   if(getCharAtxy(px,py-2)==' ')
   {
	Sleep(100);
	eraseplayer();
	py=py-2;
	printplayer();
   }
}

void playerdown()
{
   if(getCharAtxy(px,py+6)==' ')
   {
	Sleep(100);
	eraseplayer();
	py=py+2;
	printplayer();
   }
}

void playerleft()
{
   if(getCharAtxy(px-2,py)==' ')
   {
	Sleep(100);
	eraseplayer();
	px=px-3;
	printplayer();
   }
}

void movePlayer()
{
	if(GetAsyncKeyState(VK_RIGHT))
	{
		playerright();
	}
	if(GetAsyncKeyState(VK_UP))
	{
		playerup();
	}
	if(GetAsyncKeyState(VK_LEFT))
	{
		playerleft();
	}
	if(GetAsyncKeyState(VK_DOWN))
	{
		playerdown();
	}
	if(!bonus && px<=100 && px+16>=100 && py<=20 && py+5>=20)
	{
		score+=1;	//increment score
		bonus=true;	//set bonus as collected
		gotoxy(2,35);
		cout<<"Score="<<score;
	}
}

void printBonus()
{
	gotoxy(100,20);
	cout<<"$";
}

void printenemy1()
{
	gotoxy(ex1,ey1);
	cout<<"     \\\\   //           "<<endl;
	gotoxy(ex1,ey1+1);
	cout<<"  /o=======\\........... "<<endl;
	gotoxy(ex1,ey1+2);
	cout<<"  \\o=======/''''''''''' "<<endl;
	gotoxy(ex1,ey1+3);
	cout<<"     //   \\\\           "<<endl;
	
}

void eraseenemy1()
{
	gotoxy(ex1,ey1);
	cout<<"                         "<<endl;
	gotoxy(ex1,ey1+1);
	cout<<"                         "<<endl;
	gotoxy(ex1,ey1+2);
	cout<<"                         "<<endl;
	gotoxy(ex1,ey1+3);
	cout<<"                         "<<endl;
}

void moveenemy1()
{
	eraseenemy1();
	Sleep(200);
	ey1=ey1+1;
	if(ey1==30)
	{
	   ey1=8;
	}
	printenemy1();
}

void printenemy2()
{
	gotoxy(ex2,ey2);
	cout<<"         .   . "<<endl;
	gotoxy(ex2,ey2+1);
	cout<<"    ____  \\ / "<<endl;
	gotoxy(ex2,ey2+2);
	cout<<"<<<((()))_(@)  "<<endl;
}

void eraseenemy2()
{
	gotoxy(ex2,ey2);
	cout<<"               "<<endl;
	gotoxy(ex2,ey2+1);
	cout<<"               "<<endl;
	gotoxy(ex2,ey2+2);
	cout<<"               "<<endl;
}

void moveenemy2()
{
	eraseenemy2();
	Sleep(200);
	ex2=ex2+4;
	if(ex2==110)
	{
	  ex2=10;
	}
	printenemy2();
}

void printenemy3()
{
	gotoxy(ex3,ey3);
	cout<<"  ____@.@____     "<<endl;
	gotoxy(ex3,ey3+1);
	cout<<"  | | | | | |     "<<endl;
	gotoxy(ex3,ey3+2);
	cout<<" / / /   \\ \\ \\ "<<endl;
}

void eraseenemy3()
{
	gotoxy(ex3,ey3);
	cout<<"                  "<<endl;
	gotoxy(ex3,ey3+1);
	cout<<"                  "<<endl;
	gotoxy(ex3,ey3+2);
	cout<<"                  "<<endl;
}

void moveenemy3()
{
	eraseenemy3();
	Sleep(200);
	ex3=ex3+1;
	ey3=ey3-1;
	if(ex3==25 && ey3==10)
	{
	  ex3=5;
	  ey3=30;
	}
	printenemy3();
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy={0,0};
	SMALL_RECT rect={x,y,x,y};
	COORD coordBufSize;
	coordBufSize.X=1;
	coordBufSize.Y=1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
