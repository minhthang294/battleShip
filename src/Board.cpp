#include "Board.h"
#include "Location.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

Board::Board()
{
    for (int y = 0; y< 8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            _grid[x][y] = 0;
        }
    }

}

void Board::show()
{
    int coor = 0;
    cout << "   0 1 2 3 4 5 6 7 |x" << endl;
    cout << "   _______________" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << coor <<'|' << " ";
        coor++;
        for (int j = 0; j <8;j++)
        {
            cout << _grid[j][i] << " ";
        }
        cout << endl;
    }
    cout << "y" << endl;
}
void Board::clearGrid()
{
    for (int x = 0; x< 8; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            _grid[x][y] = 0;
        }
    }
}

bool Board::getShot(Location loc)
{
    if (_grid[loc.getX()][loc.getY()]==1)
    {
        _grid[loc.getX()][loc.getY()]=-1;
        loc._status = false;
        return true;
    }
    else
    {
        loc._status = false;
        _grid[loc.getX()][loc.getY()]='x';
        return false;
    }
}

bool Board::isAllShipBurnt()
{
    return (_ships[0].isBurnt() && _ships[1].isBurnt() && _ships[2].isBurnt());
}

void Board::place(Location start, int dir, int shipNo)
{
    int x = start.getX();
    int y = start.getY();
    if (shipNo < 3)
    {
        if (dir == 1) //Vertical
        {
            if(start.getY()<=5 && start.getY()>=0 && _grid[x][y] != 1 && _grid[x][y+1] != 1 && _grid[x][y+2] != 1)
            {
                Location deck[3];
                for (int i = 0; i < 3; i++)
                {
                    _grid[start.getX()][start.getY()+i] = 1;
                    deck[i].setXY(x,y+i);
                }
                _ships[shipNo].setShip(deck);
            }

        }
        else if (dir == 2) //horizontal
        {
            if (start.getX()<=5 && start.getX() >= 0 && _grid[x][y] != 1 && _grid[x+1][y] != 1 && _grid[x+2][y] != 1)
            {
                Location deck[3];
                for (int i = 0; i < 3; i++)
                {
                    _grid[start.getX()+i][start.getY()] = 1;
                    deck[i].setXY(x+i,y);
                }
                _ships[shipNo].setShip(deck);
            }
        }
    }
}

Board::~Board()
{

}
