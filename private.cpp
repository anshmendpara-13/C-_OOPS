#include <iostream>
#include <string>
#define pi 3.14

using namespace std;

class circle
{
private:
    double radius;

public:
    int a;
    double area()
    {
        cout << "Area is : ";
        return pi * radius * radius;
    }

    void setradius(int r)
    {
        radius = r;
    }
};

int main()
{
    int r;
    circle c;
    cout << "Enter the radius : " << endl;
    cin >> r;
    c.setradius(r);
    cout << c.area() << endl;
    return 0;
}