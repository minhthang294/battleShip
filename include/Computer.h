#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player
{
    public:
        Computer();
        virtual ~Computer();
        void placeShips();
        void showBoard();
    protected:

    private:
};

#endif // COMPUTER_H
