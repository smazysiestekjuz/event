#include <iostream>

using namespace std;

class Event
{
public:

    int day, month, year;
    int hour, minutes;
    string name;

    void load();
    void show();
};
