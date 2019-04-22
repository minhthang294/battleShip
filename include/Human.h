#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"


class Human : public Player
{
    public:
        Human();
        virtual ~Human();
        void placeShips();

    protected:

    private:
        string _name;
        int _score;
};

#endif // HUMAN_H
