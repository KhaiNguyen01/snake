#include<iostream>
#include<windows.h>
#include<conio.h>

#ifndef SNAKE_H
#define SNAKE_H

enum TrangThai{STOP, UP, DOWN, RIGHT, LEFT};
struct Toado{
    int x, y;
    Toado(int _x, int _y);
    Toado();
};
struct Snake{
    int dai = 3;
    Toado than[100];
    TrangThai tt = STOP;

    Snake();
//    int get_Dai();
//    void set_Dai();
//    TrangThai get_Trangthai();
//    void set_Trangthai(TrangThai &tt);
    void Dichuyen();
    void Tangdai();
    void Hienthi();
};

#endif // SNAKE_H
