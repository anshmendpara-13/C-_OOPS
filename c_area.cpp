#include <iostream>
#include <string>

#define pi 3.14

using namespace std;

int main()
{
    int r;
    cout << "Enter the radius : " << endl;
    cin >> r;
    float area = pi * r * r;
    float circomference = 2 * pi * r;
5    cout << "area : " << endl;
    cout << area << endl;
    cout << "circomference : " << endl;
    cout << circomference << endl;
    return 0;
}