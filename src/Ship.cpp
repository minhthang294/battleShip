#include "Ship.h"

Ship::Ship()
{
    //ctor
}
bool Ship::isBurnt()
{
    return (_deck[0]._status == _deck[1]._status == _deck[2]._status == false);
}
Ship::~Ship()
{
    //dtor
}
