#include<iostream>
#include<conio.h>
#include<windows.h>
#include "Map.h"

using std::cout;

Map::Map(){}

Map::Hienthi(){
        for(int i=0; i<height; i++){
        gotoxy(width,i);
        cout <<(char)179;
    }
}

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}
