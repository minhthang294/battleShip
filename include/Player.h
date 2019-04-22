#ifndef PLAYER_H
#define PLAYER_H
#include "Board.h"
#include "Location.h"


class Player
{
    public:
        Player();
        bool place(Location start, int dir, int shipNo);
        Location shot();
        bool getShot(Location loc);
        bool isAllShipsBurnt();
        virtual ~Player();

    protected:
        Board _board;

    private:
};

#endif // PLAYER_H
