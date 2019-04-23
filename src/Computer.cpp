#include "Computer.h"
#include "Player.h"
#include "Board.h"
#include "Ship.h"
#include "Location.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>

using namespace std;

Computer::Computer()
{
    //ctor
}

void Computer::placeShips()
{
    int ships = 0;
    while (ships < 3)
    {
        int x,y,dir;
        srand(time(NULL));
        dir = rand() % 2 + 1; //random in 1..2
        if (dir == 1) // vertical
        {
            srand(time(NULL));
            y = rand() % 6; //random in 0..5
            x = rand() % 8; //random in 0..7
            Location loc(x,y);
            if (this->place(loc,dir,ships))
            {
                _board.place(loc,dir,ships);
                ships++;
            }
        }
        else if (dir == 2) //horizontal
        {
            srand(time(NULL));
            x = rand() % 6; //random in 0..5
            y = rand() % 8; //random in 0..7
            Location loc(x,y);
            if (this->place(loc,dir,ships))
            {
                _board.place(loc,dir,ships);
                ships++;
            }
        }
    }
    _board.show();
}

Computer::~Computer()
{
    //dtor
}
