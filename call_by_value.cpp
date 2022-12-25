#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

double power1(int, int);

int main()
{
    int x, y;
    cout << "Enter the x and y value : " << endl;
    cin >> x >> y;
    cout << x << " to the power " << y << " is " << power1(x, y) << endl;
    return 0;
}

double power1(int x, int y)
{
    double z = pow(x, y);
    return z;
}