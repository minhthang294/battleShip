#include "Ship.h"

Ship::Ship()
{

}
bool Ship::isBurnt()
{
    return (_deck[0]._status == _deck[1]._status == _deck[2]._status == false);
}

void Ship::setShip(Location deck[3])
{
    for (int i =0; i<3; i++)
    {
        _deck[i] = deck[i];
    }
}
Ship::~Ship()
{
    //dtor
}
