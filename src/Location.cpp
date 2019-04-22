#include "Location.h"

Location::Location()
{

}

Location::Location(int x, int y)
{
    //ctor
    _x = x;
    _y = y;

}
int Location::getX()
{
    return _x;
}
int Location::getY()
{
    return _y;
}

Location::~Location()
{
    //dtor
}
