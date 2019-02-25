#include"Food.h"

Food::Food() {}

void Food::khoitao() {
    td.x = rand()% maxWidth;
    td.y = rand()% maxHeight;
}

void Food::Hienthi()
{
    gotoxy(td.x, td.y);
    cout << "o";
}
