#include "basicas.h"

Basicas::Basicas()
{

}

Basicas::~Basicas()
{

}

void Basicas::gotoxy(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;dwPos.X = x;dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}
