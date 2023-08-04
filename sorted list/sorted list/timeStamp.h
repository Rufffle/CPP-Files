#ifndef TIMESTAMP_H
#define TIMESTAMP_H
#include <iostream>
#include <string>

using namespace std;

class timeStamp
{
private:
    int second, minute, hour;
public:
    timeStamp();
    timeStamp(int, int, int);
    bool operator == (timeStamp);
    bool operator != (timeStamp);
    bool operator > (timeStamp);
    bool operator < (timeStamp);
    friend istream& operator >> (istream&, timeStamp&);
    friend ostream& operator << (ostream&, timeStamp&);
};

#endif
