#ifndef SHIP_H
#define SHIP_H
#include "Location.h"


class Ship
{
    public:
        Ship();
        virtual ~Ship();
        bool isBurnt();
        void setShip(Location deck[3]);

    protected:

    private:
        Location _deck[3];
};

#endif // SHIP_H
