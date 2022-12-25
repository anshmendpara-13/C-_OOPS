#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the two numbers : " << endl;
    cin >> a >> b;
    cout << "Before swap : "
         << "a = " << a << " b = " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap : "
         << "a = " << a << " b = " << b << endl;

    // cout <<  <<endl;
    return 0;
}