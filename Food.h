#include<iostream>
#include<windows.h>
#include<conio.h>
#include"Map.h"
#include"Snake.h"

#ifndef FOOD_H
#define FOOD_H

using std::cout;

struct Food{
    int maxWidth = 25;
    int maxHeight = 25;
    Toado td;
    Food();

    void khoitao();
    void Hienthi();
};



#endif // FOOD_H
