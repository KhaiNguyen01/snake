#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include"Snake.h"
#include "Map.h"
#include "Food.h"

#ifndef GamePlay_h
#define GamePlay_h

class GamePlay{
private:
    Snake _snake;
    Map _map;
    Food fd;
    int diem = 0;
    int speed = 0;
public:
    GamePlay();
    void DieuKhien();
    int Xuly();
    void Hienthi();
    void Chay();
};

#endif // GamePlay_h
