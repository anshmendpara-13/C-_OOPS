#include <iostream>
#include <string>

using namespace std;

class game
{
public:
    void func(int x)
    {
        cout << "value of x(int) is : " << x << endl;
    }
    void func(double x)
    {
        cout << "value of x(float) is : " << x << endl;
    }
    void func(int x, int y)
    {
        cout << "value of x and y is : " << x << " & " << y << endl;
    }
};

int main()
{
    game g;
    g.func(12);
    return 0;
}