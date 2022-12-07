#include <iostream>

using namespace std;

class Event
{
    int day, month, year;
    int hour, minutes;
    string name;

    public:

    void load();
    void show();
};
