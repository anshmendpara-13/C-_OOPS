#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the two number  :" << endl;
    cin >> a >> b;
    cout << "Before swap : "
         << "a = " << a << " b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap : "
         << "a = " << a << " b = " << b << endl;

    // cout <<  <<endl;
    return 0;
}