#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class area
{
private:
    int a, b, c;

public:
    void recgangle_area(int x, int y)
    {
        a = x;
        b = y;
        c = a * b;
        cout << "Area of the rectangle is : " << c << endl;
    }
};

int main()
{
    area s;
    cout << "Enter the length and width of the rectangle : ";
    int c, d;
    cin >> c >> d;
    s.recgangle_area(c, d);
    return 0;
}

/*
sqrt and power function are use to abstraction
*/