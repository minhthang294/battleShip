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
        void place(Location start, int dir, int shipNo);
        bool isAllShipBurnt();
        char _grid[8][8];
    protected:

        Ship _ships[3];

    private:
        int _hits;
};

#endif // BOARD_H
