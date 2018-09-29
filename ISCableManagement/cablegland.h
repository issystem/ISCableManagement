#ifndef CABLEGLAND_H
#define CABLEGLAND_H

#include <string>
#include <room.h>
class CableGland
{
public:
    CableGland();

    int GetNumber();
    void location(room r);
    void SetDescription(string s);
    string GetDescription();
    void SetType(string s);
    string GetType();


private:
    int number;
    room connectedRoomOne;

    room connectedRoomTwo;
    string description;
};

#endif // CABLEGLAND_H
