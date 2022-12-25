#include <iostream>
#include <string>

using namespace std;

int main()
{
    float b;
    int a;
    cin >> b;
    a = b;

    if (a == b)
    {
        cout << "this is int number" << endl;
        cout << "double value is " << (int)(2 * a) << endl;
    }
    else
    {
        cout << "Enter the integer number" << endl;
    }

    return 0;
}