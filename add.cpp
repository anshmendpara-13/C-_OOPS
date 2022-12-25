#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    float b;
    int c, d;
    cout << "Enter the four number :- " << endl;
    cin >> a >> b;
    cin >> c >> d;

    cout << "Addition of two number is : ";
    cout << a + b << endl;

    cout << "subtraction of two number is : ";
    cout << a - b << endl;

    cout << "multiplication of two number is : ";
    cout << a * b << endl;

    cout << "division of two number is : ";
    cout << (float)(a / b) << endl;

    cout << "average of two number is : ";
    cout << (float)((a + b) / 2) << endl;

    cout << "remainder of two number is : ";
    cout << c % d << endl;
    return 0;
}