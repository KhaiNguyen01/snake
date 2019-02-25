#include<iostream>
#include<conio.h>
#include<windows.h>

#ifndef MAP_H
#define MAP_H
class Map
{
private:

public:
    int width = 25;
    int height = 25;
    Hienthi();
    Map();
};

void gotoxy(int x, int y);

#endif // MAP_H
