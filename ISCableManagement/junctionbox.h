#ifndef JUNCTIONBOX_H
#define JUNCTIONBOX_H

#include <string>
#include <room.h>
class Junctionbox
{
public:
    Junctionbox();
    int GetNumber();
    void location(room r);
    void SetDescription(string s);
    string GetDescription();
    void SetType(string s);
    string GetType();
    void SetGlands(int n);
    int GetGlands();


private;
    int number;
    int glands;
    string description;


};

#endif // JUNCTIONBOX_H
