#include <iostream>
#include <string>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter();
};

int rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    rectangle r(12, 2);
    cout << "Area is : " << r.area() << endl;
    cout << "Perimeter is : " << r.perimeter() << endl;
    // cout <<  <<endl;
    return 0;
}