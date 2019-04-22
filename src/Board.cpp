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
    this->show();
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
        return true;
    }
    else
        return false;
}

bool Board::isAllShipBurnt()
{

}

void Board::place(Location start, int dir, int shipNo)
{
    if (shipNo < 3)
    {
        if (dir == 1) //Vertical
        {
            if(start.getY()<=5 && start.getY()>=0)
            {
                for (int i = 0; i < 3; i++)
                {
                    _grid[start.getX()][start.getY()+i] = 1;
                }
                this->show();
            }
            else
                cout << "Choose the head of ship again!";
        }
        else //horizontal
        {
            if (start.getX()<=5 && start.getX() >= 0)
            {
                for (int i = 0; i < 3; i++)
                {
                    _grid[start.getX()+i][start.getY()] = 1;
                }
                this->show();
            }
            else
                cout << "Choose the head of ship again!";
        }
    }
}

Board::~Board()
{

}
