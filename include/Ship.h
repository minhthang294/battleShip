#ifndef SHIP_H
#define SHIP_H
#include "Location.h"


class Ship
{
    public:
        Ship();
        virtual ~Ship();
        bool isBurnt();

    protected:

    private:
        Location _deck[3];
};

#endif // SHIP_H
