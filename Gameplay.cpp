#include "Gameplay.h"

using std::cout;
using std::endl;

GamePlay::GamePlay() {}


void GamePlay::Hienthi()
{
    system("cls");
    fd.Hienthi();
    _snake.Hienthi();
    _map.Hienthi();
    gotoxy(_map.width+2, 1);
    cout << "Diem: "<<diem << endl;
}

void GamePlay::DieuKhien()
{
    if (kbhit())
    {
        int key = getch();
        /*set cofig*/
        if (key == 'A' || key == 'a')
        {
            if (_snake.tt != RIGHT)
            {
                _snake.tt = LEFT;
            }
        }
        else if (key == 'D' || key == 'd')
        {
            if (_snake.tt != LEFT)
            {
                _snake.tt = RIGHT;
            }
        }
        else if (key == 'W' || key == 'w')
        {
            if (_snake.tt != DOWN)
            {
                _snake.tt = UP;
            }
        }
        else if (key == 'S' || key == 's')
        {
            if (_snake.tt != UP)
            {
                _snake.tt = DOWN;
            }
        }

    }
}

int GamePlay::Xuly()
{
    if (_snake.than[0].x == fd.td.x && _snake.than[0].y == fd.td.y)
    {
        _snake.Tangdai();
        diem ++;
        if (speed <= 8){
            speed ++;
        }
        fd.khoitao();
    }
    else
    {
        _snake.Dichuyen();
    }
    if (_snake.than[0].x <0||_snake.than[0].x>=_map.width||_snake.than[0].y <0||_snake.than[0].y>=_map.height)
    {
        return -1;
    }
    for (int i = 1; i<_snake.dai; i++)
    {
        if (_snake.than[0].x == _snake.than[i].x && _snake.than[0].y == _snake.than[i].y)
        {
            return -1;
        }
    }
    return 0;
}

void GamePlay::Chay()
{
    fd.khoitao();
        while(1)
        {
            DieuKhien();
            if (Xuly() == -1)
            {
                gotoxy(_map.width+2, 10);
                cout << "GAME OVER";
                while (getch()!=13);
                break;
            }
            Hienthi();
            Sleep(200 - speed*20);
        }
}
