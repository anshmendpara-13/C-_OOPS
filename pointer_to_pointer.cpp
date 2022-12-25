#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cout << "Enter the value : ";
    cin >> a;
    int *p = &a;
    int **q = &p;

    // cout << "Address of a is " << &a<< endl;
    cout << "Address of a is " << p << endl;

    // cout << "Address of p is " << &p << endl;
    cout << "Address of p is " << q << endl;

    return 0;
}