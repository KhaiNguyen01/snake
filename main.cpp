#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include"Snake.h"
#include "Map.h"
#include "Food.h"
#include"Gameplay.h"

using namespace std;

int main()
{
    srand(time(NULL));
    bool iscontinue = false;
    do
    {
        iscontinue = false;
        GamePlay game;
        game.Chay();
        cout << "\nContinue? (Y/N)";
        switch(getch())
        {
        case 'y':
        case'Y':
            iscontinue = true;
            break;
        default:
            break;
        }
    }
    while(iscontinue);

    return 0;
}
