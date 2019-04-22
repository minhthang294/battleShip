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

    while (shipNo <=3)
    {
        if (dir == 1) //vertical
        {
            if(start.getY()<=5 && start.getY()>=0)
                return true;
            else
                return false;
        }
        else //horizontal
        {
            if (start.getX()<=5 && start.getX() >= 0)
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
