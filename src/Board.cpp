#include "Board.h"
#include "Location.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

Board::Board()
{
    for (int x = 0; x< 8; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            _grid[x][y] = 0;
        }
    }
}

void Board::show()
{
    int coor = 0;
    cout << "   a b c d e f g h" << endl;
    cout << "   _______________" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << coor <<'|' << " ";
        coor++;
        for (int j = 0; j <8;j++)
        {
            cout << _grid[i][j] << " ";
        }
        cout << endl;
    }
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
        return true;
    else
        return false;
}

bool Board::isAllShipBurnt()
{

}

Board::~Board()
{

}
