#include <iostream>
using namespace std;

class TIME
{
    int hours;
    int minutes;
    int seconds;

public:
    TIME()
    {
        hours = 00;
        minutes = 00;
        seconds = 00;
    }
    void display()
    {
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }
    TIME(int x, int y, int z)
    {
        hours = x;
        minutes = y;
        seconds = z;
    }
    TIME(TIME t1, TIME t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60;
        seconds = seconds % 60;
        minutes = minutes + t1.minutes + t2.minutes;
        minutes = t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = hours + t1.hours + t2.hours;
    }
};

int main()
{
    TIME t;
    cout << "a) First initialize three data members Hour,Minutes,Seconds" << endl;
    cout << "b) constructor initalize the object is zero" << endl;
    t.display();
    cout << "c) constructor to initialize the some object constant value" << endl;
    TIME t1(12, 00, 00);
    t1.display();
    TIME t2(11, 34, 50);
    TIME t3(11, 34, 50);
    TIME t4(t2, t3);
    t4.display();
    return 0;
}