#include <iostream>
#include "Board.h"
#include "Location.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

int main()
{
    Board b;
    b.show();
    Computer c;
    c.placeShips();
    Human h;
    cout << "Game start!" << endl;
    cout << "Your turn" << endl;
    c.showBoard();
    while (!c.isAllShipsBurnt() || !h.isAllShipsBurnt())
    {
       while (c.getShot(h.shot()))
       {
           cout << "hit" << endl;
           c.showBoard();
       }
       cout << "miss" << endl;
       c.showBoard();
    }

    return 0;
}
