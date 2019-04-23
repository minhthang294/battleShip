#include "Human.h"
#include "Player.h"
#include <iostream>

using namespace std;

Human::Human()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
}

void Human::placeShips()
{
    int ships =0;
    cout << "Place your ship on the board!" << endl;
    while (ships<3)
    {
        int x,y,dir;
        cout << "Choose the direction of your ship:\n1. Vertical\n2. Horizontal" << endl;
        cin >> dir;
        cout << "Where is the head of your ship?" << endl;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        Location loc(x,y);
        if (this->place(loc,dir,ships))
        {
            _board.place(loc,dir,ships);
            _board.show();
            ships++;
        }
        else
            cout << "Wrong location, place again!" << endl;
    }
}

Human::~Human()
{
    //dtor
}
