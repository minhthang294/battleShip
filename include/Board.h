#ifndef BOARD_H
#define BOARD_H
#include "Location.h"
#include "Ship.h"

using namespace std;


class Board
{
    public:
        Board();
        virtual ~Board();
        void show();
        bool getShot(Location l);
        void clearGrid();
        bool place(Location start, int dir, int shipNo);
        bool isAllShipBurnt();

    protected:
        char _grid[8][8];
        Ship _ships[3];

    private:
};

#endif // BOARD_H
