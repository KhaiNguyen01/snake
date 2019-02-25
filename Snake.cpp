#include<iostream>
#include<windows.h>
#include<conio.h>
#include"Snake.h"
#include"Map.h"

using std::cout;
Toado::Toado(int _x, int _y): x(_x), y(_y){}
Toado::Toado(){}

Snake::Snake(){
    for (int i=0; i<dai; i++){
        than[i] = Toado(dai-1-i, 0);
    }
}

void Snake::Hienthi() {
     for (int i=0;i<dai;i++){
        gotoxy(than[i].x, than[i].y);
        cout << "*";
    }
}
void Snake::Dichuyen(){
    if (tt != STOP){
    	for (int i = dai-1; i>0; i--){
        	than[i] = than[i-1];
    	}
	}

    if (tt == RIGHT){
        than[0].x++;
    }
    else if (tt == LEFT){
        than[0].x--;
    }
    else if (tt == UP){
        than[0].y--;
    }
    else if (tt == DOWN){
        than[0].y++;
    }
}

void Snake::Tangdai() {
    for (int i = dai-1; i>0; i--){
            than[i] = than[i-1];
        }
        dai++;
     if (tt == RIGHT){
        than[0].x++;
        }
    else if (tt == LEFT){
        than[0].x--;
        }
    else if (tt == UP){
        than[0].y--;
        }
    if (tt == DOWN){
        than[0].y++;
    }
}
