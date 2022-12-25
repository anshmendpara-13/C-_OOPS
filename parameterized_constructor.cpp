#include <iostream>
#include <string>

using namespace std;

class max1
{
private:
    int a = 10, b = 15;

public:
    max1(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        if (a > b)
        {
            cout << "big = a - " << a << endl;
        }
        else
        {
            cout << "big = b - " << b << endl;
        }
    }
};

int main()
{
    max1 a(15,10);
    a.display();
    // m.max1(5,10);

    // cout <<  <<endl;
    return 0;
}