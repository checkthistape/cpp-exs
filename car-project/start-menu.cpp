#include<iostream>
#include<conio.h>
#include<dos.h> 
#include <windows.h>
#include <time.h>

void play();

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void setcursor(bool visible, DWORD size) {
	if(size == 0){
	size = 20;
	
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}

}	

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void instructions(){
	
	system("cls");
	std::cout<<"Instructions";
	std::cout<<"\n----------------";
	std::cout<<"\n Avoid Cars by moving left or right. ";
	std::cout<<"\n\n Press 'a' to move left";
	std::cout<<"\n Press 'd' to move right";
	std::cout<<"\n Press 'escape' to exit";
	std::cout<<"\n\nPress any key to go back to menu";
	getch();
}

	
void startmenu(){
			setcursor(0,0); 
	srand( (unsigned)time(NULL)); 
	 
	do{
		system("cls");
		gotoxy(10,5); std::cout<<" -------------------------- "; 
		gotoxy(10,6); std::cout<<" |        Car Game        | "; 
		gotoxy(10,7); std::cout<<" --------------------------";
		gotoxy(10,9); std::cout<<"1. Start Game";
		gotoxy(10,10); std::cout<<"2. Instructions";	 
		gotoxy(10,11); std::cout<<"3. Quit";
		gotoxy(10,13); std::cout<<"Select option: ";
		char op = getche();
		
		if( op=='1'){
			play();
		}/*play()*/
		else if( op=='2'){
			instructions();
		} 
		else if( op=='3'){
			std::cout<<"yeah, rock!";
		} /*exit(0)*/
		
	}while(1);
	
}
