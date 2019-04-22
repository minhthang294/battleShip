#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"


class Human : public Player
{
    public:
        Human();
        virtual ~Human();
        void placeShips();

    protected:

    private:
};

#endif // HUMAN_H
