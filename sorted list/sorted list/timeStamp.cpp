#include "timeStamp.h"

timeStamp::timeStamp()
{}

timeStamp::timeStamp(int second, int minute, int hour)
{
    this->second = second;
    this->minute = minute;
    this->hour = hour;
}

bool timeStamp::operator == (timeStamp time)
{
    if(second == time.second && minute == time.minute && hour == time.hour)
        return true;
    else
        return false;
}

bool timeStamp::operator != (timeStamp time)
{
    if (this->hour != time.hour || this->minute != time.minute || this->second != time.second)
        return true;
    else
        return false;
}

bool timeStamp::operator < (timeStamp time)
{
    if (this->hour < time.hour)
        return true;
    if (this->minute < time.minute)
        return true;
    if (this->second < time.second)
        return true;
    else
    return false;
}

bool timeStamp::operator > (timeStamp time)
{
    if (this->hour > time.hour)
        return true;
    if (this->minute > time.minute)
        return true;
    if (this->second > time.second)
        return true;
    else
    return false;
}

istream& operator >> (istream& inputstream, timeStamp& time)
{
    inputstream >> time.second >> time.minute >> time.hour;
    return inputstream;
}

ostream& operator << (ostream& outputstream, timeStamp& time)
{
    outputstream << time.second << ":" << time.minute << ":" << time.hour;
    return outputstream;
}
