#include <iostream>
#include <string>

using namespace std;

class summation
{
private:
    int a, b, c;

public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << "sum of " << x << " and " << y << " is " << c << endl;
    }
};

int main()
{
    summation s;
    s.sum(13, 10);
    // cout <<  <<endl;
    return 0;
}