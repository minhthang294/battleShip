#ifndef LOCATION_H
#define LOCATION_H


class Location
{
    public:
        Location();
        Location(int x, int y);
        virtual ~Location();
        int getX();
        int getY();
        bool _status;

    protected:

    private:
        int _x;
        int _y;

};

#endif // LOCATION_H
