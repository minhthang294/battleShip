#include "Player.h"
#include "Board.h"
#include "Ship.h"
#include "Location.h"
#include <iostream>

using namespace std;

Player::Player()
{

}
bool Player::place(Location start, int dir, int shipNo)
{
    int x = start.getX();
    int y = start.getY();

    if (shipNo <3)
    {
        if (dir == 1) //vertical
        {
            if(start.getY()<=5 && start.getY()>=0 && _board._grid[x][y] != 1 && _board._grid[x][y+1] != 1 && _board._grid[x][y+2] != 1)
                return true;
            else
                return false;
        }
        else if (dir == 2) //horizontal
        {
            if (start.getX()<=5 && start.getX() >= 0 && _board._grid[x][y] != 1 && _board._grid[x][y+1] != 1 && _board._grid[x][y+2] != 1)
                return true;
            else
                return false;
        }
    }
}

Location Player::shot()
{
    int x,y;
    cout << "Where do you want to shoot?" << endl;
    cin >> x >> y;
    Location l(x,y);
    return l;

}

bool Player::getShot(Location loc)
{
    return _board.getShot(loc);
}

Player::~Player()
{
    //dtor
}
