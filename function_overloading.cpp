#include <iostream>
#include <string>
#define pi 3.14

using namespace std;

class ara_circle
{
public:
    float circle(int r)
    {
        cout << "this is for (int) radius area :" << endl;
        return pi * r * r;
    }
    double circle(double r)
    {
        cout << "this is for (double) radius area :" << endl;
        return pi * r * r;
    }
};

int main()
{
    ara_circle g;
    cout << g.circle(12.1) << endl;
    cout << g.circle(12) << endl;
    return 0;
}