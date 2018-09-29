#ifndef CONSUMER_H
#define CONSUMER_H

#include <string>
#include <room.h>
class Consumer
{
public:
    Consumer();

    int GetNumber();
    void location(room r);
    void SetDescription(string s);
    string GetDescription();
    void SetType(string s);
    string GetType();
    void SetGlands(int n);
    int GetGlands();

private:
    int number;
    int glands;
    string description;

};

#endif // CONSUMER_H
